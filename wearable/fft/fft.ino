#include <Arduino.h>
#include <cmath>

#define BUFFER_SIZE 32 //2048      // Increased buffer size
#define CHUNK_SIZE 16 //512        // Large FFT chunk size
#define LOG2_CHUNK_SIZE 4 //9     // log2(512) = 9
#define SAMPLING_FREQUENCY 100

#ifndef PI
#define PI 3.14159265358979323846
#endif

//fft variables
int a = 0;
int b = 0;
int c = 35;
int s = 1;
int d = 0;
int state = 0;

hw_timer_t *timer = NULL;
volatile bool timerFlag = false;

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
  
  if (state == 1) {
    while (a < n) {
      b = bitReverse(a, log2n);
      if (a < b) {
        float tempReal = vReal[a];
        vReal[a] = vReal[b];
        vReal[b] = tempReal;
      }
      if (timerFlag == true) {
        timerFlag == false;
        state = 1;
        return;
      }
      a++;
    }
    state == 2;
    a = 0;
    b = 0;
  }

  if (state == 2) {
    while (s <= log2n - 1) {
      int m = 1 << s;
      int m2 = m >> 1;
      float wReal = 1.0;
      float theta = -PI / m2;
      float wmReal = cos(theta);
  
      while (d < m2) {
        if (c > d) {
          c = d;
        }
        while (c < half_n) {
          c += m;
          int kPlusM2 = c + m2;
          float tReal = wReal * vReal[kPlusM2];
  
          vReal[kPlusM2] = vReal[c] - tReal;
          vReal[c] += tReal;
  
          if (timerFlag == true) {
            timerFlag == false;
            state = 2;
            return;          
          }
        }
  
        float tempReal = wReal * wmReal;
        wReal = tempReal;
        d += 1;
      }
      s += 1;
    }
    state == 0;
    s = 1;
    d = 0;
    c = 0;
  }
}

void IRAM_ATTR onTimer() {
  // This is the timer interrupt service routine
  timerFlag = true; 
}


void setup() {
  Serial.begin(921600);
  
  vReal = (float*)malloc(CHUNK_SIZE * sizeof(float));
  if (!vReal) {
    Serial.println("Memory allocation failed!");
    while (1);
  }

  //Timer 0
  timer = timerBegin(0, 80, true);  // prescaler 80
  timerAttachInterrupt(timer, &onTimer, true);  // Attach interrupt
  //triggers interrupt every 4 ms
  timerAlarmWrite(timer, 4000, true);  // Set timer interval (in microseconds)
  timerAlarmEnable(timer);  // Enable the timer

  pinMode(5, OUTPUT);
}

void loop() {
  if (timerFlag == true) {
    digitalWrite(5, HIGH);
    delay(100); 
    digitalWrite(5, LOW);
    timerFlag = false;

    if (Serial.available() > 0) {
      String rawData = Serial.readStringUntil('\n');
      buffer[writeIndex] = rawData.toDouble();
      writeIndex = (writeIndex + 1) % BUFFER_SIZE;
      availableSamples++;
      if (availableSamples > BUFFER_SIZE) {
        availableSamples = BUFFER_SIZE;
      }
    }
    timerFlag == false;
  }

  if (!fftInProgress && availableSamples >= CHUNK_SIZE) {
    fftInProgress = true;

    int readIndex = (writeIndex - CHUNK_SIZE + BUFFER_SIZE) % BUFFER_SIZE;
    for (int i = 0; i < CHUNK_SIZE; i++) {
      vReal[i] = buffer[readIndex];
      readIndex = (readIndex + 1) % BUFFER_SIZE;
    }

    availableSamples -= CHUNK_SIZE;

    state == 1;
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
