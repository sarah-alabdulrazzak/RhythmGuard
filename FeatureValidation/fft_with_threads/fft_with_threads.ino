#include <arduinoFFT.h>  // Ensure the library is installed
#include "Arduino.h"
#include <stdlib.h>
#include <cstring>

#define SAMPLES 1024          // Must be a power of 2
#define SAMPLING_FREQUENCY 125 // Hz

ArduinoFFT<float> FFT;  // Declare FFT object for float type

float ecgBuffer[SAMPLES];  // ECG data buffer
float ppgBuffer[SAMPLES];  // PPG data buffer

float vReal[SAMPLES];  // Real part
float vImag[SAMPLES];  // Imaginary part
float frequencies[SAMPLES / 2];
float magnitude[SAMPLES / 2];
float peak_frequencies[SAMPLES / 2];
float peak_magnitudes[SAMPLES / 2];
int peak_count = 0;


//for time domain peaks
float ecg_time_peaks_widths[SAMPLES/2];
int ecg_time_peaks[SAMPLES / 2];
int ecg_time_peak_count = 0;
float peak_distance_stdDev;
float peak_distance_meanVal;


float ppg_time_valleys_widths[SAMPLES/2];
int ppg_time_valleys[SAMPLES / 2];
int ppg_time_valley_count = 0;

//for freq domain
int valley_count = 0;
int ecg_freq_valleys[SAMPLES / 2];
float ecg_freq_valley_widths[SAMPLES / 2];
float ecg_freq_valley_frequencies[SAMPLES / 2];
float ecg_freq_valley_magnitudes[SAMPLES / 2];
float ecg_freq_valley_height = -0.001;  // Set to negative value for valleys in inverted signal
float ecg_freq_valley_threshold = -0.001;  // Relaxed threshold
float ecg_freq_valley_prominence = 0.0001;  // Lower prominence for sensitivity
float ecg_freq_valley_rel_height = 0.5;  // 50% of the depth of the valley for width calculation

int ecg_freq_peaks[SAMPLES/2];
float ecg_freq_widths[SAMPLES/2];
float ecg_freq_height = 0;  // Minimum height to be considered a peak
float ecg_freq_threshold = 0;  // Minimum threshold for detection
int ecg_freq_distance = 2;  // Minimum distance between peaks
float ecg_freq_prominence = 0.001; // Minimum difference from neighbors
float ecg_freq_width = 0.75; // Placeholder for width calculation
float ecg_freq_rel_height = 0.5; // Relative height for width calculation

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
            }    

            // Print FFT Results
            /*Serial.println("FFT Results");
            for (int i = 0; i < SAMPLES / 2; i++) {  
                Serial.print(frequencies[i], 2);
                Serial.print(",");
                Serial.println(magnitude[i], 6);
            }*/

            // Find Peaks
            findPeaks(magnitude, SAMPLES / 2, ecg_freq_peaks, peak_count, ecg_freq_height, ecg_freq_threshold, ecg_freq_distance, ecg_freq_prominence, ecg_freq_rel_height, 0.75, ecg_freq_widths);

            //Serial.println("Printing Peaks");
            /*for (int i = 0; i < peak_count; i++) {
                Serial.print(frequencies[ecg_freq_peaks[i]], 2);
                Serial.print(",");
                Serial.println(magnitude[ecg_freq_peaks[i]], 6);
            }*/

            // Find Valleys
            findValleys(magnitude, SAMPLES / 2, ecg_freq_valleys, valley_count, ecg_freq_valley_height, ecg_freq_valley_threshold, ecg_freq_distance, ecg_freq_valley_prominence, ecg_freq_valley_rel_height, 0, ecg_freq_valley_widths);

            // Store and print valley results
            //Serial.println("Printing Valleys");
            //Serial.println(valley_count);
            /*for (int i = 0; i < valley_count; i++) {
                Serial.print(frequencies[ecg_freq_valleys[i]], 2);
                Serial.print(",");
                Serial.println(magnitude[ecg_freq_valleys[i]], 6);
            }*/

            //if there's more than 1 peak, find the distance between peaks/valleys in frequency domain
           float peak_d[peak_count - 1];
           float valley_d[valley_count - 1];           
           if (peak_count > 1) {
              //Serial.println("Printing Frequency Distance Between Peaks");
              peak_distance(ecg_freq_peaks, peak_count, peak_d, "frequency");
              /*
              for (int i = 0; i < peak_count - 1; i++) {
                Serial.println(peak_d[i], 6);
              }
              */
            }
/*            if (valley_count > 1) {
              Serial.println("Printing Frequency Distance Between Valleys");
              peak_distance(valleys, valley_count, valley_d, "frequency");
              for (int i = 0; i < valley_count - 1; i++) {
                Serial.println(valley_d[i], 6);
              }
            } 
*/
            //standard deviation of distances between peaks, valleys
            peak_distance_meanVal = mean(peak_d, peak_count - 1);
            peak_distance_stdDev = standardDeviation(peak_d, peak_count - 1, peak_distance_meanVal);
            
            //float valley_distance_meanVal = mean(valley_d, valley_count - 1);
            //float valley_distance_stdDev = standardDeviation(vallevalley_dys, valley_count - 1, valley_distance_meanVal);

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
    xTaskCreatePinnedToCore(FFTTask, "FFTTask", 16384, NULL, 1, &FFTTaskHandle, 1);

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

    //ecg standardization
    float ecg_meanVal = mean(dataBuffer, SAMPLES);
    float ecg_stdDev = standardDeviation(dataBuffer, SAMPLES, ecg_meanVal);
    for (int i = 0; i < SAMPLES; i++) {
      dataBuffer[i] = (dataBuffer[i] - ecg_meanVal) / ecg_stdDev;
    }            

    //peaks in time domain ecg
    findPeaks(dataBuffer, SAMPLES, ecg_time_peaks, ecg_time_peak_count, 1, 0.005, 0.3*SAMPLING_FREQUENCY, 0.2, 0, 0, ecg_time_peaks_widths);
    //Serial.println("Printing Peaks");
    //Serial.println(ecg_time_peak_count);
    float ecg_median = peak_median(ecg_time_peaks, ecg_time_peak_count);
    //Serial.println("Time Domain Peak Median of ECG");
    Serial.println("Median: "+String(ecg_median));
    Serial.println("Std: "+String(peak_distance_stdDev));

    //ppg standardization
    float ppg_meanVal = mean(ppgBuffer, SAMPLES);
    float ppg_stdDev = standardDeviation(ppgBuffer, SAMPLES, ppg_meanVal);
    for (int i = 0; i < SAMPLES; i++) {
      ppgBuffer[i] = (ppgBuffer[i] - ppg_meanVal) / ppg_stdDev;
    }  

    findValleys(ppgBuffer, SAMPLES, ppg_time_valleys, ppg_time_valley_count, 0.5, 0, 0, 0, 0, 0, ppg_time_valleys_widths);
    //if there's more than 1 peak, find the time between peaks
    float ppg_valley_d[ppg_time_valley_count - 1];
    if (ppg_time_valley_count > 1) {
      //Serial.println("Printing Distance Between Peaks");      
      peak_distance(ppg_time_valleys, ppg_time_valley_count, ppg_valley_d, "time");
      /* for (int i = 0; i < ppg_time_valley_count - 1; i++) {
        Serial.println(ppg_valley_d[i], 6);
        }*/
    }
    float diastolic_time = mean(ppg_valley_d, ppg_time_valley_count - 1);
    //float diastolic_area = trapezoidal(ppg_time_valleys, ppg_time_valley_count)

    //Serial.println("[INFO] Received Data, Sending to FFT Task...");
    xQueueOverwrite(dataQueue, dataBuffer);
}

void findPeaks(float x[], int size, int peaks[], int &peak_count, float height, float threshold, int distance, float prominence, float rel_height, float min_width, float widths[]) {
    peak_count = 0;
    int last_peak_index = -distance;

    for (int i = 2; i < size - 2; i++) {
        float current = x[i];
        float prev1 = x[i - 1], prev2 = x[i - 2];
        float next1 = x[i + 1], next2 = x[i + 2];

        // Check if the current point is a peak
        if (current > prev1 && current > next1 && current > prev2 && current > next2 &&
            current >= height && current >= threshold &&
            (current - prev1) > prominence && (current - next1) > prominence) {

            if (i - last_peak_index >= distance) {
                last_peak_index = i;
                float peakHeight = current * rel_height;

                // Find left and right width boundaries
                int left = i, right = i;
                while (left > 0 && x[left] > peakHeight) left--;
                while (right < size - 1 && x[right] > peakHeight) right++;

                float width = right - left;
                if (width >= min_width) {  // Only store if width meets the minimum requirement
                    peaks[peak_count] = i;
                    widths[peak_count] = width;
                    peak_count++;
                    if (peak_count >= (size / 10)) break;
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
            while (left > 0 && invertedMagnitude[left] > valleyHeight) left--;
            while (right < size - 1 && invertedMagnitude[right] > valleyHeight) right++;
            float width = right - left;

            if (width >= min_width) {
                valleys[valley_count] = i;
                widths[valley_count] = width;
                valley_count++;
                if (valley_count >= (size / 10)) break;
            }
        }
    }
}

String class_itos(int idx){
  if(idx==0){
      return "Atrial_Fibrillation";
  }
  else if(idx==1){
      return "Bradycardia";
  }
  else if(idx==2){
      return "Healthy";
  }
  else if(idx==3){
      return "Tachycardia";
  }
  else if(idx==4){
      return "Ventricular_Flutter_Fib";
  }
  else{
      return "Ventricular_Tachycardia";
  }
  return "";
}

// Comparison function for descending order
int sort_dec(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

float peak_median(int peaks[], int &peak_count) {
  float temp_peaks[peak_count];
  for (int i=0; i < peak_count; i++) { //making a temporary array of the peaks
    temp_peaks[i] = magnitude[peaks[i]];
  }

  qsort(temp_peaks, peak_count, sizeof(temp_peaks[0]), sort_dec);

  float median = 0;
  if (peak_count % 2 == 0) { // for even number of peaks
    median = (temp_peaks[peak_count/2] + temp_peaks[peak_count/2 + 1] ) / 2;
  }
  else { //for odd number of peaks
    median = temp_peaks[int(ceil(peak_count/2))];
  }
  return median;
}

float mean(float array[], int array_len) {
  float mean = 0;
  for (int i=0; i < array_len; i++) {
    mean += array[i];
  }
  mean = mean / array_len;
  return mean;
}

float standardDeviation(float array[], int array_len, float mean) {
  float sum = 0;
  for (int i=0; i < array_len; i++) {
    sum += pow((array[i] - mean), 2);
  }
  float stDev = sqrt(sum / (array_len - 1));
  return stDev;
}

float trapezoidal(float array[], int array_len){
  float h = 1;
  float s= array[array_len-1]+array[0];

  for(int i=1; i<array_len; i++){
    s+= 2*array[i];
  }

  return (h/2)*s;
}

void peak_distance(int peak[], int peak_count, float peak_d[], const char* domain) {
  if (peak_count < 2) return;  // Ensure valid input
  if (strcmp(domain,"time") == 0) {
    for (int i = 0; i < peak_count - 1; i++) {
        peak_d[i] = (peak[i + 1] - peak[i]) * 0.008; //difference in time between peaks in ms
    }
  }
  if (strcmp(domain,"frequency") == 0) {
    for (int i = 0; i < peak_count - 1; i++) {
      peak_d[i] = frequencies[peak[i + 1]] - frequencies[peak[i]];
    } 
  }
}
