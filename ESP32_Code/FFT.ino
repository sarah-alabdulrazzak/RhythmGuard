#include <arduinoFFT.h> // Ensure the library is correctly installed

#define SAMPLES 128          // Number of samples, must be a power of 2
#define SAMPLING_FREQUENCY 125 // Sampling frequency in Hz

ArduinoFFT<float> FFT;  // Declare FFT object for float type

float vReal[SAMPLES]; // Real part (changed to float)
float vImag[SAMPLES]; // Imaginary part (changed to float)

void setup() {
  Serial.begin(115200);
}

void loop() {
  if (Serial.available() > 0) {
    // Step 1: Receive data from Python
    for (int i = 0; i < SAMPLES; i++) {
      while (!Serial.available()); // Wait for data
      vReal[i] = Serial.parseFloat(); // Read a float value
      vImag[i] = 0; // Imaginary part is 0
    }

    // Step 2: Perform FFT
    FFT.windowing(vReal, SAMPLES, FFT_WIN_TYP_HAMMING, FFT_FORWARD); // Apply window
    FFT.compute(vReal, vImag, SAMPLES, FFT_FORWARD); // Compute FFT
    FFT.complexToMagnitude(vReal, vImag, SAMPLES); // Compute magnitude

    // Step 3: Send FFT results back to Python
    for (int i = 0; i < SAMPLES / 2; i++) { // Only positive frequencies
      float frequency = i * SAMPLING_FREQUENCY / SAMPLES; // Frequency in Hz
      Serial.print(frequency, 2);
      Serial.print(",");
      Serial.println(vReal[i], 6); // Print magnitude
    }
  }
}
