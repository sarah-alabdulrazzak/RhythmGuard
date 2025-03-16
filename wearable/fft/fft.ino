#include <Arduino.h>
#include <cmath>

#define BUFFER_SIZE 2048 //32       // Size of circular buffer (must be > CHUNK_SIZE to avoid overflow)
#define CHUNK_SIZE 1024 //16        // Size of each FFT chunk
#define LOG2_CHUNK_SIZE 10 //4     // log2(CHUNK_SIZE)
#define SAMPLING_FREQUENCY 125 // Sampling frequency in Hz

volatile double buffer[BUFFER_SIZE]; // Circular buffer to hold data
volatile int writeIndex = 0;         // Index where new data is written
volatile int availableSamples = 0;  // Number of samples available in buffer

double vReal[CHUNK_SIZE];    // Real part of FFT input
double vImag[CHUNK_SIZE];    // Imaginary part of FFT input
volatile bool fftInProgress = false; // Flag to indicate FFT is in progress

unsigned int bitReverse(unsigned int x, int log2n) {
  unsigned int n = 0;
  for (int i = 0; i < log2n; i++) {
    n <<= 1;
    n |= (x & 1);
    x >>= 1;
  }
  return n;
}

void fft(double* vReal, double* vImag, int log2n) {
  int n = 1 << log2n;

  for (unsigned int i = 0; i < n; i++) {
    unsigned int j = bitReverse(i, log2n);
    if (i < j) {
      double temp = vReal[i];
      vReal[i] = vReal[j];
      vReal[j] = temp;

      temp = vImag[i];
      vImag[i] = vImag[j];
      vImag[j] = temp;
    }
  }

  for (int s = 1; s <= log2n; s++) {
    int m = 1 << s;
    int m2 = m >> 1;
    double wReal = 1.0;
    double wImag = 0.0;
    double wmReal = cos(-PI / m2);
    double wmImag = sin(-PI / m2);

    for (int j = 0; j < m2; j++) {
      for (int k = j; k < n; k += m) {
        int kPlusM2 = k + m2;
        double tReal = wReal * vReal[kPlusM2] - wImag * vImag[kPlusM2];
        double tImag = wReal * vImag[kPlusM2] + wImag * vReal[kPlusM2];
        vReal[kPlusM2] = vReal[k] - tReal;
        vImag[kPlusM2] = vImag[k] - tImag;
        vReal[k] += tReal;
        vImag[k] += tImag;
      }
      double tempReal = wReal * wmReal - wImag * wmImag;
      wImag = wReal * wmImag + wImag * wmReal;
      wReal = tempReal;
    }
  }
}

void setup() {
  Serial.begin(115200);
  Serial.println("Send data points to start FFT processing.");
}

void loop() {
  // Handle incoming data
  if (Serial.available() > 0) {
    String rawData = Serial.readStringUntil('\n');
    //Serial.println(rawData); //successfully receives data
    buffer[writeIndex] = rawData.toDouble(); // Write new data to the buffer
    writeIndex = (writeIndex + 1) % BUFFER_SIZE; // Update write index (circular)
    availableSamples++;
    if (availableSamples > BUFFER_SIZE) {
      availableSamples = BUFFER_SIZE; // Prevent overflow
    }
    //Serial.println(buffer[writeIndex]); //buffer has data
  }

  // Process FFT when enough samples are available
  if (!fftInProgress && availableSamples >= CHUNK_SIZE) {
    fftInProgress = true;
    //Serial.println("Hi"); //works with chunk size 8
    // Load CHUNK_SIZE samples into FFT input arrays
    int readIndex = (writeIndex - availableSamples + BUFFER_SIZE) % BUFFER_SIZE;
    for (int i = 0; i < CHUNK_SIZE; i++) {
      vReal[i] = buffer[readIndex];
      vImag[i] = 0.0; // Imaginary part is 0
      readIndex = (readIndex + 1) % BUFFER_SIZE;
      //Serial.println(readIndex); //readIndex is printing " "
    }

    availableSamples -= CHUNK_SIZE;

    // Perform FFT
    fft(vReal, vImag, LOG2_CHUNK_SIZE);

    // Print FFT results (frequency and magnitude)
    Serial.println("FFT Results:");
    for (int i = 0; i < CHUNK_SIZE / 2; i++) {
      double magnitude = sqrt(vReal[i] * vReal[i] + vImag[i] * vImag[i]);
      double frequency = (double)i * SAMPLING_FREQUENCY / CHUNK_SIZE;
      Serial.print(frequency);
      Serial.print(",");
      Serial.print(magnitude);
      Serial.println();
    }

    fftInProgress = false; // Allow new FFT to start
  }
}
