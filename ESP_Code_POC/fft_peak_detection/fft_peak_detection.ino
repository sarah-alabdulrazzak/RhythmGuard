#include <arduinoFFT.h> // Ensure the library is correctly installed
#include "Arduino.h"

#define SAMPLES 1024          // Number of samples, must be a power of 2
#define SAMPLING_FREQUENCY 125 // Sampling frequency in Hz
#define INTERVAL_US (1000000 / SAMPLING_FREQUENCY) // 8000 µs (8 ms)

ArduinoFFT<float> FFT;  // Declare FFT object for float type

float unfiltered[SAMPLES];
//float vReal[SAMPLES]; // Real part (changed to float)
float vImag[SAMPLES]; // Imaginary part (changed to float)
float frequencies[SAMPLES/2];
float magnitude[SAMPLES/2];
float peak_frequencies[SAMPLES/2];
float peak_magnitudes[SAMPLES/2];
float vReal[SAMPLES];  // Circular buffer for ECG data
volatile int writeIndex = 0;  // Write pointer for the buffer

int peaks[SAMPLES/2];
float widths[SAMPLES/2];
int peakCount = 0;
float height = 0;  // Minimum height to be considered a peak
float threshold = 0;  // Minimum threshold for detection
float distance = 0;  // Minimum distance between peaks
float prominence = 0.001; // Minimum difference from neighbors
float width = 0.75; // Placeholder for width calculation
float rel_height = 0.5; // Relative height for width calculation

hw_timer_t *timer = NULL;  // Timer object
volatile bool sampleData = false;  // Flag for interrupt

void IRAM_ATTR onTimer() {
  sampleData = true;  // Set flag inside ISR
}

void findPeaks(float x[], int size, int peaks[], int &peakCount, float height, float threshold, int distance, float prominence, float width, float rel_height, float widths[]) {
    peakCount = 0;
    
    for (int i = 1; i < size - 1; i++) {
        if (x[i] > x[i - 1] && x[i] > x[i + 1]) {  // Local maxima condition
            float leftDiff = x[i] - x[i - 1];
            float rightDiff = x[i] - x[i + 1];
            
            if (x[i] >= height && x[i] >= threshold && leftDiff >= prominence && rightDiff >= prominence) {
                // Ensure distance condition is met
                if (peakCount == 0 || (i - peaks[peakCount - 1]) >= distance) {
                    peaks[peakCount] = i;
                    
                    // Calculate width at relative height
                    float peakHeight = x[i] * rel_height;
                    int left = i, right = i;
                    while (left > 0 && x[left] > peakHeight) left--;
                    while (right < size - 1 && x[right] > peakHeight) right++;
                    widths[peakCount] = right - left;
                    
                    peakCount++;
                }
            }
        }
    }
}

void setup() {
  Serial.begin(115200);
  while (!Serial) { delay(10); }

  // Initialize Timer at 1s (1,000,000 µs)
  timer = timerBegin(1000000);  // 80 prescaler → 1 tick = 1µs
  timerAttachInterrupt(timer, &onTimer);
  //timerAlarmWrite(timer, 10000000, true);  // Fire every 10,000,000µs (10s)
  //timerAlarmEnable(timer);  // Enable the alarm
  timerAlarm(timer, 10000000, true, 0);

  memset(vReal, 0, sizeof(vReal));

  Serial.println("[INFO] ESP32 Ready!");   

  for (int i=0; i< SAMPLES; i++) {
    vImag[i] = 0;
  } 
}

void loop() {
    if (Serial.available() > 0) {
      // Step 1: Receive data from Python
      String input = Serial.readStringUntil('\n'); // Read until newline
      float value = input.toFloat(); // Convert to float
      if (!isnan(value)) {  // Check for valid conversion
          vReal[writeIndex] = value;
          writeIndex = (writeIndex + 1) % SAMPLES;
          sampleData = false;
      }

      if (writeIndex == 0) {
        FFT.windowing(vReal, SAMPLES, FFT_WIN_TYP_HAMMING, FFT_FORWARD); // Apply window
        FFT.compute(vReal, vImag, SAMPLES, FFT_FORWARD); // Compute FFT
        FFT.complexToMagnitude(vReal, vImag, SAMPLES); // Compute magnitude

        float frequency_step = (SAMPLING_FREQUENCY/2.0) / (SAMPLES / 2);

        for (int i = 0; i < SAMPLES / 2; i++) { // Only positive frequencies
          frequencies[i] = i * frequency_step;
          magnitude[i] = vReal[i];
          Serial.print(frequencies[i], 2);
          Serial.print(",");
          Serial.println(magnitude[i], 6); // Print magnitude
          //Serial.println(vReal[i], 6); //printed vReal just after high pass filter and it was filled with Nans
        }   

        findPeaks(magnitude, SAMPLES / 2, peaks, peakCount, height, threshold, distance, prominence, width, rel_height, widths);
        Serial.println("Printing Peaks");
        for (int i = 0; i < SAMPLES / 2; i++) {
            if (peaks[i] != NULL) {
              int index = peaks[i];
              Serial.print(frequencies[index], 2);
              Serial.print(",");
              Serial.println(magnitude[index], 6);
            }
        }

        Serial.println("End");
      }
    }
}
