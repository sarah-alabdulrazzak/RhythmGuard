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


//for time domain peaks
float time_peaks_widths[SAMPLES/2];
int time_peaks[SAMPLES / 2];
int time_peak_count = 0;

int valley_count = 0;
int valleys[SAMPLES / 2];
float valley_widths[SAMPLES / 2];

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

            findPeaks(vReal, SAMPLES / 2, time_peaks, time_peak_count, 1, 0.005, 0.3*SAMPLING_FREQUENCY, 0.2, 0, 0, time_peaks_widths);
            float median = peak_median(peaks, peak_count);
            Serial.println("Time Domain Peak Median");
            Serial.println(String(median));

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

            float mean = mean*(magnitude, SAMPLES / 2);
            float stdDev = standardDeviation(magnitude, SAMPLES / 2, mean);
            for (int i = 0; i < SAMPLES/2; i++) {
              magnitude[i] = (magnitude[i] - mean) / stdDev; //standardization
            }

            for (int i = 0; i < SAMPLES / 2; i++) {  
                magnitude[i] = (magnitude[i] - mean) / stdDev;
                invertedMagnitude[i] = -1*magnitude[i]; // Invert for valley detection
            }      

            // Print FFT Results
            for (int i = 0; i < SAMPLES / 2; i++) {  
                Serial.print(frequencies[i], 2);
                Serial.print(",");
                Serial.println(magnitude[i], 6);
            }

            // Find Peaks
            findPeaks(magnitude, SAMPLES / 2, peaks, peak_count, height, threshold, distance, prominence, rel_height, 0.75, widths);

            Serial.println("Printing Peaks");
            for (int i = 0; i < peak_count; i++) {
                Serial.print(frequencies[peaks[i]], 2);
                Serial.print(",");
                Serial.println(magnitude[peaks[i]], 6);
            }

            // Find Valleys
            findPeaks(invertedMagnitude, SAMPLES / 2, valleys, valley_count, 0, 0, 0, 0.001, 0.5, 1.5, valley_widths);

            // Store and print valley results
            Serial.println("Printing Valleys");
            Serial.println(valley_count);
            for (int i = 0; i < valley_count; i++) {
                Serial.print(frequencies[valleys[i]], 2);
                Serial.print(",");
                Serial.println(magnitude[valleys[i]], 6);
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

    // Create FFT Task
    xTaskCreatePinnedToCore(FFTTask, "FFTTask", 8192, NULL, 1, &FFTTaskHandle, 1);

    Serial.println("[INFO] ESP32 Ready!");
}

void loop() {
    static float dataBuffer[SAMPLES];
    Serial.println("[DEBUG] Waiting for Serial Data...");

    for (int i = 0; i < SAMPLES; i++) {
        unsigned long start_time = millis();
        while (!Serial.available()) {
            if (millis() - start_time > 10000) { // Timeout after 10 seconds
                Serial.println("[ERROR] Serial timeout waiting for data.");
                return;
            }
        }
        dataBuffer[i] = Serial.parseFloat();
    }

    Serial.println("[INFO] Received Data, Sending to FFT Task...");
    xQueueOverwrite(dataQueue, dataBuffer);
}

void findPeaks(float x[], int size, int peaks[], int &peak_count, float height, float threshold, int distance, float prominence, float rel_height, float min_width, float widths[]) {
    peak_count = 0;
    int last_peak_index = -distance;

    for (int i = 2; i < size - 2; i++) {
        float current = x[i];
        float prev1 = x[i - 1], prev2 = x[i - 2];
        float next1 = x[i + 1], next2 = x[i + 2];

        // Check if the current point is a peak
        if (current > prev1 && current > next1 && current > prev2 && current > next2 &&
            current >= height && current >= threshold &&
            (current - prev1) > prominence && (current - next1) > prominence) {

            if (i - last_peak_index >= distance) {
                last_peak_index = i;
                float peakHeight = current * rel_height;

                // Find left and right width boundaries
                int left = i, right = i;
                while (left > 0 && x[left] > peakHeight) left--;
                while (right < size - 1 && x[right] > peakHeight) right++;

                float width = right - left;
                if (width >= min_width) {  // Only store if width meets the minimum requirement
                    peaks[peak_count] = i;
                    widths[peak_count] = width;
                    peak_count++;
                    if (peak_count >= (size / 10)) break;
                }
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

float mean(float array[], int array_len) {
  float mean = 0;
  for (int i=0; i < array_len; i++) {
    mean += array[i];
  }
  mean = mean / array_len;
  return mean;
}

float standardDeviation(float array[], int array_len, float mean) {
  float sum = 0;
  for (int i=0; i < array_len; i++) {
    sum += pow((array[i] - mean), 2);
  }
  float stDev = sqrt(sum / (array_len - 1));
  return stDev;
}
