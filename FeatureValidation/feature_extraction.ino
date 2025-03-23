#include <arduinoFFT.h>  // Ensure the library is installed
#include "Arduino.h"
#include <stdlib.h>

#define SAMPLES 1024          // Must be a power of 2
#define SAMPLING_FREQUENCY 125 // Hz

ArduinoFFT<float> FFT;  // Declare FFT object for float type

float ecgBuffer[SAMPLES];  // ECG data buffer
float ppgBuffer[SAMPLES];  // PPG data buffer

float vReal[SAMPLES];  // Real part
float vImag[SAMPLES];  // Imaginary part
float ppgData[SAMPLES];  // Imaginary part
float frequencies[SAMPLES / 2];
float magnitude[SAMPLES / 2];
float invertedMagnitude[SAMPLES / 2]; // Needed for valley detection
float peak_frequencies[SAMPLES / 2];
float peak_magnitudes[SAMPLES / 2];
int peak_count = 0;
int ppg_valley_count = 0;

int valley_count = 0;
int valleys[SAMPLES / 2];
int ppg_valleys[SAMPLES / 2];
float valley_widths[SAMPLES / 2];
float valley_frequencies[SAMPLES / 2];
float valley_magnitudes[SAMPLES / 2];
float valley_distance = 0;
float valley_height = 0;  // Set to negative value for valleys in inverted signal
float valley_threshold = 0;  // Relaxed threshold
float valley_prominence = 0.15;  // Lower prominence for sensitivity
float valley_rel_height = 0.3;  // 50% of the depth of the valley for width calculation

int peaks[SAMPLES / 2];
float peak_widths[SAMPLES / 2];
float peak_height = 0;  // Minimum height to be considered a peak
float threshold = 0;  // Minimum threshold for detection
int peak_distance = 0;  // Minimum distance between peaks and valleys
float peak_prominence = 0.2; // Minimum difference from neighbors
float peak_width = 0; // Placeholder for width calculation
float peak_rel_height = 1; // Relative height for width calculation

// For time domain peaks and valleys
float time_peaks_widths[SAMPLES / 2];
float ppg_valleys_widths[SAMPLES / 2];
int time_peaks[SAMPLES / 2];
int time_peak_count = 0;

int time_valleys[SAMPLES / 2];
float time_valley_widths[SAMPLES / 2];
int time_valley_count = 0;

TaskHandle_t FFTTaskHandle;   // FFT Task
QueueHandle_t dataQueue;      // Queue for data transfer

void FFTTask(void *parameter) {
    float fftBuffer[SAMPLES];  // Buffer for FFT computation
    while (true) {
        if (xQueueReceive(dataQueue, &fftBuffer, portMAX_DELAY) == pdTRUE) {
            Serial.println("[INFO] Processing FFT...");

            // Standardize ECG and PPG before processing
            // standardizeSignal(fftBuffer, SAMPLES);  // ECG Standardization
            standardizeSignal(ppgBuffer, SAMPLES);  // PPG Standardization

            // Copy ECG data into FFT arrays
            for (int i = 0; i < SAMPLES; i++) {
                vReal[i] = fftBuffer[i];
                vImag[i] = 0;
                ppgData[i] = ppgBuffer[i];
            }

            // Time-domain PPG valley detection
            // find_Valleys_PPG(ppgData, SAMPLES, ppg_valleys, ppg_valley_count, 0, 0, 0.00001);
            find_Valleys_Time(ppgData, SAMPLES, ppg_valleys, ppg_valley_count, 0, 0, 0, 0, 0.10, 0, ppg_valleys_widths);

            
            // Print PPG Valleys
            Serial.println("PPG Time-Domain Valleys:");
            for (int i = 0; i < ppg_valley_count; i++) {
                Serial.print("Index: ");
                Serial.print(ppg_valleys[i]);
                Serial.print(", Value: ");
                Serial.println(ppgData[ppg_valleys[i]], 6);
            }

            // Print Diastolic Time
            // Serial.print("Diastolic Time: ");
            // Serial.println(diastolic_time, 6);


            // Perform time-domain peak and valley detection
            findPeaks(vReal, SAMPLES, time_peaks, time_peak_count, 0.3, 0.005, 0.1 * SAMPLING_FREQUENCY, 0.2, 0, 0, time_peaks_widths);
            find_Valleys_Time(vReal, SAMPLES, time_valleys, time_valley_count, 0, 0, 0.1 * SAMPLING_FREQUENCY, 0.01, 0, 0, time_valley_widths);

            // Print time-domain peaks
            // Serial.println("Time-Domain Peaks:");
            // for (int i = 0; i < time_peak_count; i++) {
            //     Serial.print("Index: ");
            //     Serial.print(time_peaks[i]);
            //     Serial.print(", Value: ");
            //     Serial.println(vReal[time_peaks[i]], 6);
            // }

            // // Print time-domain valleys
            // Serial.println("Time-Domain Valleys:");
            // for (int i = 0; i < time_valley_count; i++) {
            //     Serial.print("Index: ");
            //     Serial.print(time_valleys[i]);
            //     Serial.print(", Value: ");
            //     Serial.println(vReal[time_valleys[i]], 6);
            // }

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
            findPeaks(magnitude, SAMPLES / 2, peaks, peak_count, peak_height, threshold, peak_distance, peak_prominence, peak_rel_height, 0, peak_widths);

            Serial.println("Printing Peaks");
            for (int i = 0; i < peak_count; i++) {
                Serial.print(frequencies[peaks[i]], 2);
                Serial.print(",");
                Serial.println(magnitude[peaks[i]], 6);
            }

            // Find Valleys
            findValleys(magnitude, SAMPLES / 2, valleys, valley_count, valley_height, valley_threshold, valley_distance, valley_prominence, valley_rel_height, 0, valley_widths);

            // Store and print valley results
            Serial.println("Printing Valleys");
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
    Serial.begin(921600);
    delay(1000);  // Wait for ESP32 boot messages
    while (!Serial) { delay(10); }

    // Create queue (single item buffer to mimic circular behavior)
    dataQueue = xQueueCreate(1, sizeof(float) * SAMPLES);  

    // Create FFT Task
    xTaskCreatePinnedToCore(FFTTask, "FFTTask", 16384, NULL, 1, &FFTTaskHandle, 1);

    Serial.println("[INFO] ESP32 Ready!");
}

void loop() {
    static float dataBuffer[SAMPLES];
    Serial.println("[DEBUG] Waiting for Serial Data...");
    for (int i = 0; i < SAMPLES; i++) {
        unsigned long start_time = millis();
        while (!Serial.available()) {
            if (millis() - start_time > 100000) { // Timeout after 10 seconds
                Serial.println("[ERROR] Serial timeout waiting for data.");
                return;
            }
        }

        String input = Serial.readStringUntil('\n');

        // Assuming input has ECG first and PPG second separated by a space or comma
        int separatorIndex = input.indexOf(','); // Assuming data is comma-separated
        if (separatorIndex > 0) {
            String ecgValue = input.substring(0, separatorIndex);
            String ppgValue = input.substring(separatorIndex + 1);

            dataBuffer[i] = ecgValue.toFloat();  // ECG data
            ppgBuffer[i] = ppgValue.toFloat();  // PPG data

        }
        else{
          i--;
        }
    }

    Serial.println("[INFO] Received Data, Sending to FFT Task...");
    xQueueOverwrite(dataQueue, dataBuffer);  // Send ECG data to FFT Task
    
}

#include <Arduino.h>

void findPeaks(float x[], int size, int peaks[], int &peak_count, 
               float height, float threshold, int distance, float prominence, 
               float rel_height, float min_width, float widths[]) {

    peak_count = 0;
    int last_peak_index = -distance;

    for (int i = 1; i < size - 1; i++) {  // Only check one point on each side
        float current = x[i];
        float prev = x[i - 1];
        float next = x[i + 1];

        // Check if the current point is a peak
        if (current > prev && current > next &&
            current >= height && current >= threshold &&
            ((current - prev) > prominence || (current - next) > prominence)) {  // Use OR for prominence check

            if (i - last_peak_index >= distance) {  // Ensure peaks are sufficiently spaced
                last_peak_index = i;
                float peakHeight = current * rel_height;

                // Find left and right width boundaries
                int left = i, right = i;
                while (left > 0 && x[left] > peakHeight * 0.9) left--;  // Allow small buffer
                while (right < size - 1 && x[right] > peakHeight * 0.9) right++;

                float width = right - left;
                if (width >= min_width) {  // Only store if width meets min requirement
                    peaks[peak_count] = i;
                    widths[peak_count] = width;
                    peak_count++;                  
                }
            }
        }
    }
}


void findValleys(float x[], int size, int valleys[], int &valley_count, float height, float threshold, int distance, float prominence, float rel_height, float min_width, float widths[]) {
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

            // Calculate width at half the valley depth
            float valleyHeight = current * rel_height;
            int left = i, right = i;
            while (left > 0 && invertedMagnitude[left] >= valleyHeight) left--;  
            while (right < size - 1 && invertedMagnitude[right] >= valleyHeight) right++;  

            float width = right - left;

            if (width >= min_width) {
                valleys[valley_count] = i;
                widths[valley_count] = width;
                valley_count++;
            }
        }
    }
}

void find_Valleys_Time(float x[], int size, int valleys[], int &valley_count, 
                 float height, float threshold, int distance, float prominence, 
                 float rel_height, float min_width, float widths[]) {
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
            current >= height && current >= threshold &&  // Adjust height comparison
            abs(current - prev1) > prominence && abs(current - next1) > prominence) {

            // Calculate width at half the valley depth
            float valleyHeight = current * rel_height;
            int left = i, right = i;
            while (left > 0 && invertedMagnitude[left] >= valleyHeight) left--;  
            while (right < size - 1 && invertedMagnitude[right] >= valleyHeight) right++;  

            float width = right - left;

            if (width >= min_width) {
                if (i - last_valley_index >= distance) {  // Ensure valley spacing
                    valleys[valley_count] = i;
                    widths[valley_count] = width;
                    valley_count++;
                    last_valley_index = i;
                }
            }
        }
    }
}

void find_Valleys_PPG(float x[], int size, int valleys[], int &valley_count, float height, int min_width, float prominence) {
    valley_count = 0;
    
    for (int i = min_width; i < size - min_width; i++) {
        float curr = x[i];

        // Check if the point is a local minimum within `min_width`
        bool is_valley = (x[i] < x[i - 1]) && (x[i] < x[i + 1]);
        for (int j = 1; j <= min_width; j++) {
            if (x[i - j] < curr || x[i + j] < curr) {
                is_valley = false;
                break;
            }
        }

        // Ensure it meets the height and prominence threshold
        float left = x[i - min_width];
        float right = x[i + min_width];
        float min_prominence = (left + right) / 2 - curr;  // Estimated prominence
        
        if (is_valley && curr <= height && min_prominence >= prominence) {
            if (valley_count == 0 || (i - valleys[valley_count - 1] > min_width)) {
                valleys[valley_count++] = i;  // Store valley index
                i += min_width;  // Skip ahead to prevent detecting the same valley twice
            }
        }
    }
}

// ** Standardization Function **
void standardizeSignal(float signal[], int size) {
    float mean = 0.0;
    float stdDev = 0.0;

    // Compute mean
    for (int i = 0; i < size; i++) {
        mean += signal[i];
    }
    mean /= size;

    // Compute standard deviation
    for (int i = 0; i < size; i++) {
        stdDev += pow(signal[i] - mean, 2);
    }
    stdDev = sqrt(stdDev / size);

    // Standardize signal
    for (int i = 0; i < size; i++) {
        signal[i] = (signal[i] - mean) / stdDev;
    }
}












