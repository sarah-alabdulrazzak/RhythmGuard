#include <arduinoFFT.h>  
#include <stdlib.h>
#include "Arduino.h"
#include "random_forest.h"

#define SAMPLES 1024          
#define SAMPLING_FREQUENCY 125 

// FFT Object
ArduinoFFT<float> FFT;  

// Data Buffers
float ecgBuffer[SAMPLES];  
float ppgBuffer[SAMPLES];  
float vReal[SAMPLES]; 
float vImag[SAMPLES];  
float ppgData[SAMPLES]; 
float frequencies[SAMPLES / 2];
float magnitude[SAMPLES / 2];
float invertedMagnitude[SAMPLES / 2];
float timeArr[SAMPLES]; 


// Peak and Valley Detection Variables
int peaks[SAMPLES / 2], peak_count = 0;
float peak_widths[SAMPLES / 2];
float peak_frequencies[SAMPLES / 2];

int valleys[SAMPLES / 2], valley_count = 0;
float valley_widths[SAMPLES / 2];
float valley_distance = 0;

float peak_median = 0;
float valley_median = 0;
float diff_median = 0;

// Time-Domain Peak and Valley Detection Variables
int time_peaks[SAMPLES / 2], time_peak_count = 0;
float time_peaks_widths[SAMPLES / 2];
int time_valleys[SAMPLES / 2], time_valley_count = 0;
float time_valley_widths[SAMPLES / 2];
float rr_std=0;
float ss_median=0;

int ppg_peaks[SAMPLES], ppg_peak_count = 0;
float ppg_peaks_widths[SAMPLES];
float ppg_threshold=0; 
float systolic_time=0;
float systolic_area = 0;

//Task and Queue Handles
TaskHandle_t FFTTaskHandle;   
QueueHandle_t ecgQueue;
QueueHandle_t ppgQueue;

void FFTTask(void *parameter) {
    float fftBuffer[SAMPLES];  

    while (true) {
        if (xQueueReceive(ecgQueue, &ecgBuffer, portMAX_DELAY) == pdTRUE && xQueueReceive(ppgQueue, &ppgBuffer, portMAX_DELAY) == pdTRUE) {

            Serial.println("[INFO] Processing FFT...");

            // Prepare Input
            for (int i = 0; i < SAMPLES; i++) {
                vReal[i] = ecgBuffer[i];
                vImag[i] = 0;
                ppgData[i] = ppgBuffer[i];
            }

            // Perform FFT
            FFT.windowing(vReal, SAMPLES, FFT_WIN_TYP_HAMMING, FFT_FORWARD);
            FFT.compute(vReal, vImag, SAMPLES, FFT_FORWARD);
            FFT.complexToMagnitude(vReal, vImag, SAMPLES);

            float frequency_step = (SAMPLING_FREQUENCY / 2.0) / (SAMPLES / 2);
            for (int i = 0; i < SAMPLES / 2; i++) {  
                frequencies[i] = i * frequency_step;
                magnitude[i] = vReal[i];
            }
            findPeaks_Noor(magnitude, SAMPLES / 2, peaks, peak_count, 0.04, 30, 0.05, 5, peak_widths);
            findValleys_Noor(magnitude, SAMPLES / 2, valleys, valley_count, 1.5, 0, 0.01, 2, valley_widths);
            if (peak_count > 0) {
              float peak_values[peak_count];
              for (int i = 0; i < peak_count; i++) {
                  peak_values[i] = magnitude[peaks[i]];
              }
              peak_median = calc_median_distance(peak_values, peak_count);
            }
             // Calculate median of FFT valley heights
            float valley_median = 0;
            if (valley_count > 0) {
                float valley_values[valley_count];
                for (int i = 0; i < valley_count; i++) {
                    valley_values[i] = magnitude[valleys[i]];
                }
                valley_median = calc_median_distance(valley_values, valley_count);
            }

            // Difference between median of FFT peaks and valleys
            diff_median = abs(peak_median - valley_median);

            // PPG Features
            float ppgData_norm[SAMPLES];
            for (int i = 0; i < SAMPLES; i++) {
                ppgData_norm[i] = ppgData[i];
            }
            normalize(ppgData_norm);
            findPeaks_Noor(ppgData_norm, SAMPLES, ppg_peaks, ppg_peak_count, 0.3, 50, 0, 5, ppg_peaks_widths);
            float ppg_peaks_float[ppg_peak_count];
            for (int i = 0; i < ppg_peak_count; i++) {
                ppg_peaks_float[i] = float(ppg_peaks[i]);
            }
            systolic_time = float(calc_median_distance(ppg_peaks_float, ppg_peak_count)) / SAMPLING_FREQUENCY;
            if (peak_count > 1) {
                float peak_values[peak_count];
                for (int i = 0; i < peak_count; i++) {
                    peak_values[i] = ppgData_norm[peaks[i]];
                }
                systolic_area = trapezoidal(peak_values, peak_count);
            }

            // ECG Time Domain Features
            findPeaks_Noor(vReal, SAMPLES, time_peaks, time_peak_count, 0.3, 1, 0, 3, time_peaks_widths);
            findValleys_Noor(vReal, SAMPLES, time_valleys, time_valley_count, 0.3, 1, 0, 5, time_valley_widths);
            float time_valleys_float[time_valley_count];
            for (int i = 0; i < time_valley_count; i++) {
                time_valleys_float[i] = float(time_valleys[i]);
            }
            ss_median = float(calc_median_distance(time_valleys_float, time_valley_count));
            rr_std = float(calc_std_distance(time_peaks, time_peak_count));

            int predicted_class = random_forest_predict(systolic_area, diff_median, ss_median, systolic_time, rr_std);

            
            // Print FFT Results
            // for (int i = 0; i < SAMPLES / 2; i++) {  
            //     Serial.print(frequencies[i], 2);
            //     Serial.print(",");
            //     Serial.println(magnitude[i], 6);
            // }

            // Serial.println("Printing Peaks");
            // for (int i = 0; i < peak_count; i++) {
            //     Serial.print(frequencies[peaks[i]], 2);
            //     Serial.print(",");
            //     Serial.println(magnitude[peaks[i]], 6);
            // }

            //  // Store and print valley results
            // Serial.println("Printing Valleys");
            // for (int i = 0; i < valley_count; i++) {
            //     Serial.print(frequencies[valleys[i]], 2);
            //     Serial.print(",");
            //     Serial.println(magnitude[valleys[i]], 6);
            // }

            //  // Print PPG signal for graphing
            // Serial.println("Printing PPG Signal:");
            // for (int i = 0; i < SAMPLES; i++) {
            //     Serial.print(i); // Print the index (time)
            //     Serial.print(",");
            //     Serial.println(ppgData_norm[i], 6);  // Print the normalized PPG signal value
            // }

            // // Print PPG Peaks
            // Serial.println("Printing PPG Peaks:");
            // for (int i = 0; i < ppg_peak_count; i++) {
            //     Serial.print("Peak at index: ");
            //     Serial.print(ppg_peaks[i]);
            //     Serial.print(", Value: ");
            //     Serial.println(ppgData_norm[ppg_peaks[i]], 6);
            // }

            Serial.print("Systolic Area: ");
            Serial.println(systolic_area, 6);

            Serial.print("Systolic Time: ");
            Serial.println(systolic_time, 6);

            Serial.print("ss_median: ");
            Serial.println(ss_median, 6);

            Serial.print("rr_std: ");
            Serial.println(rr_std, 6);

            Serial.print("Difference of Medians (Peak - Valley): ");
            Serial.println(diff_median, 6);

            Serial.print("Predicted Class:");
            Serial.println(predicted_class, 6);

            vTaskDelay(10 / portTICK_PERIOD_MS);  // 10 ms delay to reduce CPU load

            Serial.println("End");
        }
    }
}

void setup() {
    Serial.begin(115200);
    delay(1000);  
    while (!Serial) { delay(10); }

    // Initialize Queue and Task
    ecgQueue = xQueueCreate(1, sizeof(float) * SAMPLES);
    ppgQueue = xQueueCreate(1, sizeof(float) * SAMPLES);

    xTaskCreatePinnedToCore(FFTTask, "FFTTask", 16384, NULL, 1, &FFTTaskHandle, 1);

    Serial.println("[INFO] ESP32 Ready!");
}

void loop() {
    static float dataBuffer[SAMPLES];
    Serial.println("[DEBUG] Waiting for Serial Data...");

    for (int i = 0; i < SAMPLES; i++) {
        unsigned long start_time = millis();
        while (!Serial.available()) {
            if (millis() - start_time > 100000) { 
                Serial.println("[ERROR] Serial timeout waiting for data.");
                return;
            }
        }

        String input = Serial.readStringUntil('\n');
        int separatorIndex = input.indexOf(','); 
        if (separatorIndex > 0) {
            dataBuffer[i] = input.substring(0, separatorIndex).toFloat();
            ppgBuffer[i] = input.substring(separatorIndex + 1).toFloat();
        }
        else{
          i--; 
        }
    }

    Serial.println("[INFO] Received Data, Sending to FFT Task...");
    xQueueOverwrite(ecgQueue, dataBuffer);
    xQueueOverwrite(ppgQueue, ppgBuffer);
}


float getStdDev(int arr[], int size){
  float mean = 0.0, stdDev = 0.0;

  // Compute mean
  for (int i = 0; i < size; i++) {
      mean += float(arr[i]);
  }
  mean /= size;

  // Compute standard deviation
  for (int i = 0; i < size; i++) {
    stdDev += (arr[i] - mean) * (arr[i] - mean);
  }
  stdDev = sqrt(stdDev / size);

  return stdDev;
}

void findValleys_Noor(float x[], int size, int valleys[], int &valley_count, 
                      float max_val, int distance, 
                      float prominence, float width, float widths[]) {

  valley_count=0;
  int ctr=0;
  for(int i=0; i<size; i++){
    // Deal breakers
    if(i==0){
      continue;
    }
    if(i==size-1){
      continue;
    }
    if(x[i]>max_val){
      continue;
    }
    if(i>0 && x[i-1]<x[i]){
      continue;
    }
    if(i<size-1 && x[i+1]<x[i]){
      continue;
    }
    if(i>floor(width/2) && x[i-int(floor(width/2))]-x[i]<prominence){
      continue;
    }
    if(i<size-1-floor(width/2) && x[i+int(floor(width/2))]-x[i]<prominence){
      continue;
    }

    // Clustering neighboring valleys
    if(valley_count>0 && i-valleys[valley_count-1]<distance){
      int prevValleyWeight=ctr+1;
      valleys[valley_count]=int(floor(((valleys[valley_count-1]*(prevValleyWeight))+i)/(prevValleyWeight+1)));
      ctr++;
      continue;
    }
    else{
      ctr=0;
    }

    // Put it in valleys
    valleys[valley_count]=i;
    valley_count++;
  }
}

void findPeaks_Noor(float x[], int size, int peaks[], int &peak_count, 
                      float min_val, int distance, 
                      float prominence, float width, float widths[]) {

  peak_count=0;
  int ctr=0;
  for(int i=0; i<size; i++){
    // Deal breakers
    if(i==0){
      continue;
    }
    if(i==size-1){
      continue;
    }
    if(x[i]<min_val){
      continue;
    }
    if(i>0 && x[i-1]>x[i]){
      continue;
    }
    if(i<size-1 && x[i+1]>x[i]){
      continue;
    }
    if(i>floor(width/2) && x[i]-x[i-int(floor(width/2))]<prominence){
      continue;
    }
    if(i<size-1-floor(width/2) && x[i]-x[i+int(floor(width/2))]<prominence){
      continue;
    }

    /* // Clustering neighboring peaks
    if(peak_count>0 && i-valleys[peak_count-1]<distance){
     int prevPeakWeight=ctr+1;
     peaks[peak_count]=int(floor(((peaks[peak_count-1]*(prevPeakWeight))+i)/(prevPeakWeight+1)));
     ctr++;
     continue;
    }
    else{
      ctr=0;
    }*/

    // Put it in peaks
    peaks[peak_count]=i;
    peak_count++;
  }
}

float calc_median_distance(float points[], int size) {
    if (size < 2) {
        return 0;
    }
    float distances[size - 1];
    for (int i = 0; i < size - 1; i++) {
        distances[i] = points[i + 1] - points[i];
    }
    if ((size - 1) % 2 == 0) { // if even
        return (distances[(size - 1) / 2] + distances[((size - 1) / 2) + 1]) / 2.0;
    } else {
        return distances[(size - 1) / 2];
    }
}

int calc_std_distance(int points[], int size){
  if(size<2){
    return 0;
  }
  int distances[size-1];
  for(int i=0; i<size-1; i++){
    distances[i]=points[i+1]-points[i];
  }
  return getStdDev(distances, size-1);
}

float min(float arr[]){
  float min_val = 1000;
  for(int i=0; i<SAMPLES; i++){
    if(arr[i]<min_val){
      min_val=arr[i];
    }
  }
  return min_val;
}
float max(float arr[]){
  float max_val = -1000;
  for(int i=0; i<SAMPLES; i++){
    if(arr[i]>max_val){
      max_val=arr[i];
    }
  }
  return max_val;
}
void normalize(float arr[]){
  float min_val=min(arr);
  float max_val=max(arr);
  if(min_val==max_val){
    return;
  }
  for(int i=0; i<SAMPLES; i++){
    arr[i]=(arr[i]-min_val)/(max_val-min_val);
  }
}

float trapezoidal(float array[], int array_len){
  float s = array[array_len - 1] + array[0];

  for (int i = 1; i < array_len - 1; i++) {
    s += 2 * array[i];
  }

  return s;
}



