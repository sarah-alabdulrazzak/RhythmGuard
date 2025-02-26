#include <Arduino.h>
#include <cmath>

#define BUFFER_SIZE 2048      // Increased buffer size
#define CHUNK_SIZE 512        // Large FFT chunk size
#define LOG2_CHUNK_SIZE 9     // log2(512) = 9
#define SAMPLING_FREQUENCY 100

#ifndef PI
#define PI 3.14159265358979323846
#endif

volatile float buffer[BUFFER_SIZE];
volatile int writeIndex = 0;
volatile int availableSamples = 0;
float* vReal;  // Dynamically allocate memory
volatile bool fftInProgress = false;

unsigned int bitReverse(unsigned int x, int log2n) {
  unsigned int n = 0;
  for (int i = 0; i < log2n; i++) {
    n <<= 1;
    n |= (x & 1);
    x >>= 1;
  }
  return n;
}

void fft(float* vReal, int log2n) {
  int n = 1 << log2n;
  int half_n = n / 2;

  for (unsigned int i = 0; i < n; i++) {
    unsigned int j = bitReverse(i, log2n);
    if (i < j) {
      float tempReal = vReal[i];
      vReal[i] = vReal[j];
      vReal[j] = tempReal;
    }
  }

  for (int s = 1; s <= log2n - 1; s++) {
    int m = 1 << s;
    int m2 = m >> 1;
    float wReal = 1.0;
    float theta = -PI / m2;
    float wmReal = cos(theta);

    for (int j = 0; j < m2; j++) {
      for (int k = j; k < half_n; k += m) {
        int kPlusM2 = k + m2;
        float tReal = wReal * vReal[kPlusM2];

        vReal[kPlusM2] = vReal[k] - tReal;
        vReal[k] += tReal;
      }

      float tempReal = wReal * wmReal;
      wReal = tempReal;
    }
  }
}

void setup() {
  Serial.begin(921600);

  vReal = (float*)malloc(CHUNK_SIZE * sizeof(float));
  if (!vReal) {
    Serial.println("Memory allocation failed!");
    while (1);
  }
}

void loop() {
  if (Serial.available() > 0) {
    String rawData = Serial.readStringUntil('\n');
    buffer[writeIndex] = rawData.toDouble();
    writeIndex = (writeIndex + 1) % BUFFER_SIZE;
    availableSamples++;
    if (availableSamples > BUFFER_SIZE) {
      availableSamples = BUFFER_SIZE;
    }
  }

  if (!fftInProgress && availableSamples >= CHUNK_SIZE) {
    fftInProgress = true;

    int readIndex = (writeIndex - CHUNK_SIZE + BUFFER_SIZE) % BUFFER_SIZE;
    for (int i = 0; i < CHUNK_SIZE; i++) {
      vReal[i] = buffer[readIndex];
      readIndex = (readIndex + 1) % BUFFER_SIZE;
    }

    availableSamples -= CHUNK_SIZE;

    fft(vReal, LOG2_CHUNK_SIZE);

    Serial.println("FFT Results:");
    for (int i = 0; i < CHUNK_SIZE / 2; i++) {
      float magnitude = sqrt(vReal[i] * vReal[i]);
      float frequency = (float)i * SAMPLING_FREQUENCY / CHUNK_SIZE;
      Serial.print(frequency);
      Serial.print(",");
      Serial.println(magnitude);
      
      if (i % 16 == 0) delay(5);  // Prevent serial buffer overflow
    }

    fftInProgress = false;
  }
}
