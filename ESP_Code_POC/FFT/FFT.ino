#include <arduinoFFT.h> // Ensure the library is correctly installed

#define SAMPLES 128          // Number of samples, must be a power of 2
#define SAMPLING_FREQUENCY 125 // Sampling frequency in Hz

ArduinoFFT<float> FFT;  // Declare FFT object for float type

float vReal[SAMPLES]; // Real part (changed to float)
float vImag[SAMPLES]; // Imaginary part (changed to float)
float frequencies[SAMPLES/2];
float magnitude[SAMPLES/2];
float peak_frequencies[SAMPLES/2];
float peak_magnitudes[SAMPLES/2];

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
      frequencies[i] = frequency;
      magnitude[i] = vReal[i];
      Serial.print(frequencies[i], 2);
      Serial.print(",");
      Serial.println(magnitude[i], 6); // Print magnitude
    }

    peaks();
    int i = 0;
    Serial.println("Printing Peaks");
    while (peak_magnitudes[i] != NULL) {
      Serial.print(peak_frequencies[i], 2);
      Serial.print(",");
      Serial.println(peak_magnitudes[i], 6); 
      i+=1;
    }
    Serial.println("End");
    
  }
}

void peaks() {
  int j = 0; //used to index peak arrays
  double prominence_threshold = 0.1; //can be changed
  double base = 0;
  
  for (int i=1; i<SAMPLES/2 -2; i++) {
    if (magnitude[i] > magnitude[i-1] && magnitude[i] > magnitude[i+1]) {
      if (magnitude[i - 1] > magnitude[i + 1]) {
        base = magnitude[i - 1];
      }
      else {
        base = magnitude[i + 1];
      }
      double prominence = magnitude[i] - base; // find relative height of peak wrt to adjacent points

      if (prominence > prominence_threshold) {
        peak_magnitudes[j] = magnitude[i];
        peak_frequencies[j] = frequencies[i];
        j += 1;
      }

    }
  }
}


