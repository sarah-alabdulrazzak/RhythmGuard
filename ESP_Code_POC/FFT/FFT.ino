#include <arduinoFFT.h> // Ensure the library is correctly installed

#define SAMPLES 1024          // Number of samples, must be a power of 2
#define SAMPLING_FREQUENCY 125 // Sampling frequency in Hz

ArduinoFFT<float> FFT;  // Declare FFT object for float type

float unfiltered[SAMPLES];
float vReal[SAMPLES]; // Real part (changed to float)
float vImag[SAMPLES]; // Imaginary part (changed to float)
float frequencies[SAMPLES/2];
float magnitude[SAMPLES/2];
float peak_frequencies[SAMPLES/2];
float peak_magnitudes[SAMPLES/2];
int peak_count;
unsigned long fft_old_time;
unsigned long fft_elapsed_time;
unsigned long peaks_old_time;
unsigned long peaks_elapsed_time;

void setup() {
  Serial.begin(115200);
}

void loop() {
  if (Serial.available() > 0) {
    // Step 1: Receive data from Python
    for (int i = 0; i < SAMPLES; i++) {
      while (!Serial.available()); // Wait for data
      vReal[i] = Serial.parseFloat(); // Read a float value
      //unfiltered[i] = Serial.parseFloat();
      vImag[i] = 0; // Imaginary part is 0
    }
/*
    //1st order low pass filter w0 = 50 Hz
    //transfer function H = 50/(s+50)
    //b0 = 0.1667, b1 = 0.1667, a1 = −0.6667
    double temp[SAMPLES]; //use temp to get the low pass filter outputs and then pass temp to the high pass filter
    vReal[0] = 0.1667 * unfiltered[0];
    for (int i = 1; i < SAMPLES ; i++) {
      vReal[i] = -0.6667*vReal[i-1] + 0.1667*unfiltered[i] + 0.1667*unfiltered[i-1]; //discrete transfer function
    }

    //1st order high pass for wc of 0.05 Hz
    //transfer function H = s / (s + (2*pi*wc)) = s / (s + 0.31416)
    //b0 = 2, b1 = -2, a1 = -1.3727
    vReal[0] = 1 * temp[0];
    for (int i = 1; i < SAMPLES ; i++) {
      vReal[i] = -0.997489878*vReal[i-1] + 1*temp[i] -1*temp[i-1]; //discrete transfer function
    }
*/    
    fft_old_time=millis();
    // Step 2: Perform FFT
    FFT.windowing(vReal, SAMPLES, FFT_WIN_TYP_HAMMING, FFT_FORWARD); // Apply window
    FFT.compute(vReal, vImag, SAMPLES, FFT_FORWARD); // Compute FFT
    FFT.complexToMagnitude(vReal, vImag, SAMPLES); // Compute magnitude

    float frequency_step = (SAMPLING_FREQUENCY/2.0) / (SAMPLES / 2);

    fft_elapsed_time=millis()-fft_old_time;

    // Step 3: Send FFT results back to Python
    for (int i = 0; i < SAMPLES / 2; i++) { // Only positive frequencies
      frequencies[i] = i * frequency_step;
      magnitude[i] = vReal[i];
      Serial.print(frequencies[i], 2);
      Serial.print(",");
      Serial.println(magnitude[i], 6); // Print magnitude
      //Serial.println(vReal[i], 6); //printed vReal just after high pass filter and it was filled with Nans
    }

    peaks_old_time=millis();
    peaks();
    peaks_elapsed_time=millis()-peaks_old_time;

    

    Serial.println("Printing Peaks");
    for (int i = 0; i < peak_count; i++) {
      Serial.print(peak_frequencies[i], 2);
      Serial.print(",");
      Serial.println(peak_magnitudes[i], 6); 
      i+=1;
    }

    

    Serial.println("FFT calculation time (ms): ");
    Serial.println(fft_elapsed_time);

    Serial.println("Peaks calculation time (ms): ");
    Serial.println(peaks_elapsed_time);

    Serial.println("End");
    
  }
}

void peaks() {
  int j = 0; //used to index peak arrays
  double prominence_threshold = 0.1; //can be changed
  
  for (int i=1; i<SAMPLES/2 -2; i++) {
    if (magnitude[i] > magnitude[i-1] && magnitude[i] > magnitude[i+1]) {
      double base = fmax(magnitude[i - 1], magnitude[i + 1]);
      double prominence = magnitude[i] - base; // find relative height of peak wrt to adjacent points

      if (prominence > prominence_threshold) {
        peak_magnitudes[j] = magnitude[i];
        peak_frequencies[j] = frequencies[i];
        j += 1;
      }

    }
  }
  peak_count = j;
}


