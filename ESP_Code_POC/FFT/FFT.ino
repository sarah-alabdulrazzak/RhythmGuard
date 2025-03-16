#include <arduinoFFT.h>  // Ensure the library is installed
#include "Arduino.h"
#include <stdlib.h>

#define SAMPLES 1024          // Must be a power of 2
#define SAMPLING_FREQUENCY 125 // Hz

ArduinoFFT<float> FFT;  // Declare FFT object for float type

float vReal[SAMPLES];  // Real part
float vImag[SAMPLES];  // Imaginary part
float frequencies[SAMPLES / 2];
float magnitude[SAMPLES / 2];
float invertedMagnitude[SAMPLES / 2]; // Needed for valley detection
float peak_frequencies[SAMPLES / 2];
float peak_magnitudes[SAMPLES / 2];
int peak_count = 0;

float ppgBuffer[SAMPLES]; // Separate buffer for PPG data

int valley_count = 0;
int valleys[SAMPLES / 2];
float valley_widths[SAMPLES / 2];
float valley_frequencies[SAMPLES / 2];
float valley_magnitudes[SAMPLES / 2];
float valley_height = -0.001;  // Set to negative value for valleys in inverted signal
float valley_threshold = -0.001;  // Relaxed threshold
float valley_prominence = 0.0001;  // Lower prominence for sensitivity
float valley_rel_height = 0.5;  // 50% of the depth of the valley for width calculation


int peaks[SAMPLES/2];
float widths[SAMPLES/2];
float height = 0;  // Minimum height to be considered a peak
float threshold = 0;  // Minimum threshold for detection
int distance = 2;  // Minimum distance between peaks
float prominence = 0.001; // Minimum difference from neighbors
float width = 0.75; // Placeholder for width calculation
float rel_height = 0.5; // Relative height for width calculation

TaskHandle_t FFTTaskHandle;   // FFT Task
QueueHandle_t dataQueue;      // Queue for data transfer
QueueHandle_t ppgQueue;      // Queue for PPG data transfer

void FFTTask(void *parameter) {
    float fftBuffer[SAMPLES];  // Buffer for FFT computation
    while (true) {
        if (xQueueReceive(dataQueue, &fftBuffer, portMAX_DELAY) == pdTRUE) {
            Serial.println("[INFO] Processing FFT...");

            // Copy data into FFT arrays
            for (int i = 0; i < SAMPLES; i++) {
                vReal[i] = fftBuffer[i];
                vImag[i] = 0;
            }

            // Perform FFT
            FFT.windowing(vReal, SAMPLES, FFT_WIN_TYP_HAMMING, FFT_FORWARD);
            FFT.compute(vReal, vImag, SAMPLES, FFT_FORWARD);
            FFT.complexToMagnitude(vReal, vImag, SAMPLES);

            float frequency_step = (SAMPLING_FREQUENCY / 2.0) / (SAMPLES / 2);

            // Store FFT results
            for (int i = 0; i < SAMPLES / 2; i++) {  
                frequencies[i] = i * frequency_step;
                magnitude[i] = vReal[i];
            }

            // Print FFT Results
            for (int i = 0; i < SAMPLES / 2; i++) {  
                Serial.print(frequencies[i], 2);
                Serial.print(",");
                Serial.println(magnitude[i], 6);
            }

            // Find Peaks
            findPeaks(magnitude, SAMPLES / 2, peaks, peak_count, height, threshold, distance, prominence, rel_height, widths);

            Serial.println("Printing Peaks");
            for (int i = 0; i < peak_count; i++) {
                Serial.print(frequencies[peaks[i]], 2);
                Serial.print(",");
                Serial.println(magnitude[peaks[i]], 6);
            }

            float median = peak_median(peaks, peak_count);
            Serial.println("Peak Median");
            Serial.println(String(median));

            // Find Valleys
            findValleys(magnitude, SAMPLES / 2, valleys, valley_count, valley_height, valley_threshold, distance, valley_prominence, valley_rel_height, valley_widths);

            // Store and print valley results
            Serial.println("Printing Valleys");
            for (int i = 0; i < valley_count; i++) {
                valley_frequencies[i] = frequencies[valleys[i]];
                valley_magnitudes[i] = magnitude[valleys[i]]; // Use original magnitude
                Serial.print(valley_frequencies[i], 2);
                Serial.print(",");
                Serial.println(valley_magnitudes[i], 6);
            }

            Serial.println("End");
        }
    }
}

void setup() {
    Serial.begin(115200);
    delay(1000);  // Wait for ESP32 boot messages
    while (!Serial) { delay(10); }

    // Create queue (single item buffer to mimic circular behavior)
    dataQueue = xQueueCreate(1, sizeof(float) * SAMPLES);  
    ppgQueue = xQueueCreate(1, sizeof(float) * SAMPLES); //ppg queue 

    // Create FFT Task
    xTaskCreatePinnedToCore(FFTTask, "FFTTask", 8192, NULL, 1, &FFTTaskHandle, 1);

    Serial.println("[INFO] ESP32 Ready!");
}

void loop() {
    static float dataBuffer[SAMPLES];
    static float ppgData[SAMPLES];
    Serial.println("[DEBUG] Waiting for Serial Data...");

    for (int i = 0; i < SAMPLES; i++) {
        unsigned long start_time = millis();
        while (!Serial.available()) {
            if (millis() - start_time > 10000) { // Timeout after 10 seconds
                Serial.println("[ERROR] Serial timeout waiting for data.");
                return;
            }
        }
        String input = Serial.readStringUntil('\n');
        if (input.startsWith("E")) {
            dataBuffer[i] = Serial.parseFloat();
        } else if (input.startsWith("P")) {
            ppgData[i] = input.substring(1).toFloat(); // Parse PPG data
        } else {
            i--; // Ignore invalid data
        }
    }

    Serial.println("[INFO] Received ECG & PPG Data, Processing...");
    xQueueOverwrite(dataQueue, dataBuffer);
    xQueueOverwrite(ppgQueue, ppgData); // Store PPG data (not processed yet)
}

void findPeaks(float x[], int size, int peaks[], int &peak_count, float height, float threshold, int distance, float prominence, float rel_height, float widths[]) {
    peak_count = 0;
    int last_peak_index = -distance;

    for (int i = 2; i < size - 2; i++) {
        float current = x[i];
        float prev1 = x[i - 1], prev2 = x[i - 2];
        float next1 = x[i + 1], next2 = x[i + 2];

        if (current > prev1 && current > next1 && current > prev2 && current > next2 && 
            current >= height && current >= threshold &&
            (current - prev1) > prominence && (current - next1) > prominence) {

            if (i - last_peak_index >= distance) {
                last_peak_index = i;
                peaks[peak_count] = i;

                float peakHeight = current * rel_height;
                int left = i, right = i;
                while (left > 0 && x[left] > peakHeight) left--;
                while (right < size - 1 && x[right] > peakHeight) right++;
                widths[peak_count] = right - left;

                peak_count++;
                if (peak_count >= (size / 10)) break;
            }
        }
    }
}

void findValleys(float x[], int size, int valleys[], int &valley_count, float height, float threshold, int distance, float prominence, float rel_height, float widths[]) {
    valley_count = 0;
    int last_valley_index = -distance;

    // Invert the signal for valley detection
    float invertedMagnitude[size];
    for (int i = 0; i < size; i++) {
        invertedMagnitude[i] = -x[i];  // Invert the signal to treat valleys as peaks
    }

    for (int i = 2; i < size - 2; i++) {
        float current = invertedMagnitude[i];
        float prev1 = invertedMagnitude[i - 1], prev2 = invertedMagnitude[i - 2];
        float next1 = invertedMagnitude[i + 1], next2 = invertedMagnitude[i + 2];

        // Look for peaks in the inverted signal (which are valleys in the original)
        if (current > prev1 && current > next1 && current > prev2 && current > next2 && 
            current <= height && current <= threshold &&  // Relaxed height and threshold
            (current - prev1) > prominence && (current - next1) > prominence) {

            if (i - last_valley_index >= distance) {
                last_valley_index = i;
                valleys[valley_count] = i;

                // Calculate width at half the valley depth
                float valleyHeight = current * rel_height;
                int left = i, right = i;
                while (left > 0 && invertedMagnitude[left] > valleyHeight) left--;
                while (right < size - 1 && invertedMagnitude[right] > valleyHeight) right++;
                widths[valley_count] = right - left;

                valley_count++;
                if (valley_count >= (size / 10)) break;
            }
        }
    }
}

// Comparison function for descending order
int sort_dec(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

float peak_median(int peaks[], int &peak_count) {
  float temp_peaks[peak_count];
  for (int i=0; i < peak_count; i++) { //making a temporary array of the peaks
    temp_peaks[i] = magnitude[peaks[i]];
  }

  qsort(temp_peaks, peak_count, sizeof(temp_peaks[0]), sort_dec);

  float median = 0;
  if (peak_count % 2 == 0) { // for even number of peaks
    median = (temp_peaks[peak_count/2] + temp_peaks[peak_count/2 + 1] ) / 2;
  }
  else { //for odd number of peaks
    median = temp_peaks[int(ceil(peak_count/2))];
  }

  return median;  
}
