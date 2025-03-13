#include <arduinoFFT.h>  // Ensure the library is installed
#include "Arduino.h"

#define SAMPLES 1024          // Must be a power of 2
#define SAMPLING_FREQUENCY 125 // Hz

ArduinoFFT<float> FFT;  // Declare FFT object for float type

float vReal[SAMPLES];  // Real part
float vImag[SAMPLES];  // Imaginary part
float frequencies[SAMPLES / 2];
float magnitude[SAMPLES / 2];
float peak_frequencies[SAMPLES / 2];
float peak_magnitudes[SAMPLES / 2];
int peak_count = 0;

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

            // Print FFT Results
            for (int i = 0; i < SAMPLES / 2; i++) {  
                frequencies[i] = i * frequency_step;
                magnitude[i] = vReal[i];
                Serial.print(frequencies[i], 2);
                Serial.print(",");
                Serial.println(magnitude[i], 6);
            }

            // Find Peaks
            findPeaks();

            Serial.println("Printing Peaks");
            for (int i = 0; i < peak_count; i++) {
                Serial.print(peak_frequencies[i], 2);
                Serial.print(",");
                Serial.println(peak_magnitudes[i], 6);
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

    // Use overwrite to always replace old data (circular buffer behavior)
    xQueueOverwrite(dataQueue, &dataBuffer);
}

void findPeaks() {
    int j = 0;
    double threshold = 0.1;

    for (int i = 1; i < SAMPLES / 2 - 1; i++) {
        if (magnitude[i] > magnitude[i - 1] && magnitude[i] > magnitude[i + 1]) {
            double base = fmax(magnitude[i - 1], magnitude[i + 1]);
            double prominence = magnitude[i] - base;

            if (prominence > threshold) {
                peak_magnitudes[j] = magnitude[i];
                peak_frequencies[j] = frequencies[i];
                j++;
            }
        }
    }
    peak_count = j;
}
