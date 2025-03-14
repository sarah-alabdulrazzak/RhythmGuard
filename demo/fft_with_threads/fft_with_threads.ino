#include <arduinoFFT.h>  // Ensure the library is installed
#include "Arduino.h"

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

int valley_count = 0;
int valleys[SAMPLES / 2];
float valley_widths[SAMPLES / 2];
float valley_frequencies[SAMPLES / 2];
float valley_magnitudes[SAMPLES / 2];

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

            // Perform FFT
            FFT.windowing(vReal, SAMPLES, FFT_WIN_TYP_HAMMING, FFT_FORWARD);
            FFT.compute(vReal, vImag, SAMPLES, FFT_FORWARD);
            FFT.complexToMagnitude(vReal, vImag, SAMPLES);

            float frequency_step = (SAMPLING_FREQUENCY / 2.0) / (SAMPLES / 2);

            // Store FFT results
            for (int i = 0; i < SAMPLES / 2; i++) {  
                frequencies[i] = i * frequency_step;
                magnitude[i] = vReal[i];
                invertedMagnitude[i] = -vReal[i]; // Invert for valley detection
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

            // Find Valleys
            findPeaks(invertedMagnitude, SAMPLES / 2, valleys, valley_count, height, threshold, distance, prominence, rel_height, valley_widths);

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
