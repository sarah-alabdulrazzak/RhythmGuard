#include <arduinoFFT.h>  
#include "Arduino.h"
#include <stdlib.h>

#define SAMPLES 1024          // Must be a power of 2
#define SAMPLING_FREQUENCY 125 // Hz

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

int SCALE_FACTOR = 1000;

// Peak and Valley Detection Variables
int peaks[SAMPLES / 2], peak_count = 0;
float peak_widths[SAMPLES / 2];
float peak_frequencies[SAMPLES / 2];
float peak_height = 0;  
float threshold = 0, peak_prominence = 0.2, peak_width = 0, peak_rel_height = 1; 
int peak_distance = 0;  

int valleys[SAMPLES / 2], valley_count = 0;
float valley_widths[SAMPLES / 2];
float valley_height = 0, valley_threshold = 0, valley_prominence = 0.15, valley_rel_height = 0.3;
float valley_distance = 0;

int ppg_valleys[SAMPLES], ppg_valley_count = 0;
float ppg_valleys_widths[SAMPLES];
float ppg_threshold; 
float diastolic_time;

// Time-Domain Peak and Valley Detection Variables
int time_peaks[SAMPLES / 2], time_peak_count = 0;
float time_peaks_widths[SAMPLES / 2];
int time_valleys[SAMPLES / 2], time_valley_count = 0;
float time_valley_widths[SAMPLES / 2];
float rr_std;
float rr_median;

//Task and Queue Handles
TaskHandle_t FFTTaskHandle;   
QueueHandle_t ecgQueue;
QueueHandle_t ppgQueue;

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

void FFTTask(void *parameter) {
    float fftBuffer[SAMPLES];  

    while (true) {
        if (xQueueReceive(ecgQueue, &ecgBuffer, portMAX_DELAY) == pdTRUE && xQueueReceive(ppgQueue, &ppgBuffer, portMAX_DELAY) == pdTRUE) {

            Serial.println("[INFO] Processing FFT...");

            // Standardization
            // standardizeSignal(fftBuffer, SAMPLES);  // ECG Standardization
            // standardizeSignal(ppgBuffer, SAMPLES);  // PPG Standardization

            // Prepare Input
            for (int i = 0; i < SAMPLES; i++) {
                vReal[i] = ecgBuffer[i];
                vImag[i] = 0;
                ppgData[i] = ppgBuffer[i];
            }

            // Serial.println("[INFO] Printing PPG Signal...");
            // for (int i = 0; i < SAMPLES; i++) {
            //     Serial.println(ppgBuffer[i]);
            // }


            // Time-domain Processing
            // findValleys_PPG(ppgData, SAMPLES, ppg_valleys, ppg_valley_count, -0.05, 0.005, 10, 0.01, 0.5, 3, ppg_valleys_widths, 100);

            // ppg_threshold = calculatePercentile(ppgData, SAMPLES, 50.0 / 100.0);

            // Calculate the threshold dynamically as a percentage of the signal's mean or median
            float mean_value = 0;
            for (int i = 0; i < SAMPLES; i++) {
                mean_value += ppgBuffer[i];
            }
            mean_value /= SAMPLES;

            float ppg_threshold = mean_value * 0.7;  // Set a threshold as 70% of the signal's mean value

            float ppgData_norm[SAMPLES];
            for (int i = 0; i < SAMPLES; i++) {
                ppgData_norm[i] = ppgData[i];
            }
            normalize(ppgData_norm);

            //findValleys_PPG(ppgData, SAMPLES, ppg_valleys, ppg_valley_count, ppg_threshold);
            findValleys_Noor(ppgData_norm, SAMPLES, ppg_valleys, ppg_valley_count, 0.3, 50, 0, 5, ppg_valleys_widths);

            // Calculate Diastolic Time
            diastolic_time = float(calc_median_distance(ppg_valleys, ppg_valley_count))/SAMPLING_FREQUENCY;
            
            /*if (ppg_valley_count > 1) {
                float total_time = 0;
                for (int i = 1; i < ppg_valley_count; i++) {
                    // Calculate the time difference between consecutive valleys
                    float time_diff = (ppg_valleys[i] - ppg_valleys[i - 1]) / SAMPLING_FREQUENCY;  // in seconds
                    total_time += time_diff;
                }
                // Average the time differences to get the mean diastolic time
                diastolic_time = total_time / (ppg_valley_count - 1);
            }*/

            // Print Diastolic Time
            //Serial.print("Diastolic Time: ");
            //Serial.println(diastolic_time, 6);

            findPeaks(vReal, SAMPLES, time_peaks, time_peak_count, 0.3, 0.005, 0.001 * SAMPLING_FREQUENCY, 0.2, 0, 0, time_peaks_widths);
            find_Valleys_Time(vReal, SAMPLES, time_valleys, time_valley_count, 0, 0, 0.1 * SAMPLING_FREQUENCY, 0.01, 0, 0, time_valley_widths);
            rr_median = float(calc_median_distance(time_peaks, time_peak_count))/SAMPLING_FREQUENCY;
            rr_std = float(calc_std_distance(time_peaks, time_peak_count))/SAMPLING_FREQUENCY;
            Serial.print("Peak Time std distance: ");
            Serial.println(rr_std);
            // Print PPG Valleys
            // Serial.println("PPG Time-Domain Valleys:");
            // for (int i = 0; i < ppg_valley_count; i++) {
            //     Serial.print("Index: ");
            //     Serial.print(ppg_valleys[i]);
            //     Serial.print(", Value: ");
            //     Serial.println(ppgData[ppg_valleys[i]], 6);
            // }

            // Print Diastolic Time
            // Serial.print("Diastolic Time: ");
            // Serial.println(diastolic_time, 6);
           
            // Print time-domain peaks
            // Serial.println("Time-Domain Peaks:");
            // for (int i = 0; i < time_peak_count; i++) {
            //     Serial.print("Index: ");
            //     Serial.print(time_peaks[i]);
            //     Serial.print(", Value: ");
            //     Serial.println(vReal[time_peaks[i]], 6);
            // }

            // // Print time-domain valleys
            // Serial.println("Time-Domain Valleys:");
            // for (int i = 0; i < time_valley_count; i++) {
            //     Serial.print("Index: ");
            //     Serial.print(time_valleys[i]);
            //     Serial.print(", Value: ");
            //     Serial.println(vReal[time_valleys[i]], 6);
            // }

            // Perform FFT
            FFT.windowing(vReal, SAMPLES, FFT_WIN_TYP_HAMMING, FFT_FORWARD);
            FFT.compute(vReal, vImag, SAMPLES, FFT_FORWARD);
            FFT.complexToMagnitude(vReal, vImag, SAMPLES);

            // Store Frequency Domain Results
            float frequency_step = (SAMPLING_FREQUENCY / 2.0) / (SAMPLES / 2);
            for (int i = 0; i < SAMPLES / 2; i++) {  
                frequencies[i] = i * frequency_step;
                magnitude[i] = vReal[i];
            }

            // Print FFT Results
            for (int i = 0; i < SAMPLES/2; i++) {  
                Serial.print(0);
                Serial.print(",");
                Serial.println(0);
            }

            // Peak and Valley Detection
            findPeaks(magnitude, SAMPLES / 2, peaks, peak_count, peak_height, threshold, peak_distance, peak_prominence, peak_rel_height, 0, peak_widths);
            findValleys(magnitude, SAMPLES / 2, valleys, valley_count, valley_height, valley_threshold, valley_distance, valley_prominence, valley_rel_height, 0, valley_widths);


            Serial.println("Printing Peaks");
            for (int i = 0; i < peak_count; i++) {
                Serial.print(0);
                Serial.print(",");
                Serial.println(0);
            }

            // Store and print valley results
            Serial.println("Printing Valleys");
            for (int i = 0; i < ppg_valley_count; i++) {
                Serial.print(0);
                Serial.print(",");
                Serial.println(0);
            }

            vTaskDelay(10 / portTICK_PERIOD_MS);  // 10 ms delay to reduce CPU load

            Serial.println("End");
        }
    }
}

void setup() {
    Serial.begin(115200);
    delay(1000);  // Wait for ESP32 boot messages
    while (!Serial) { delay(10); }

    // Initialize Queue and Task
    ecgQueue = xQueueCreate(1, sizeof(float) * SAMPLES);
    ppgQueue = xQueueCreate(1, sizeof(float) * SAMPLES);

    for(int i=0; i<SAMPLES; i++){
      timeArr[i]=i;
    }

    xTaskCreatePinnedToCore(FFTTask, "FFTTask", 16384, NULL, 1, &FFTTaskHandle, 1);

    Serial.println("[INFO] ESP32 Ready!");
}

void loop() {
    static float dataBuffer[SAMPLES];
    Serial.println("[DEBUG] Waiting for Serial Data...");

    for (int i = 0; i < SAMPLES; i++) {
        unsigned long start_time = millis();
        while (!Serial.available()) {
            if (millis() - start_time > 100000) { // Timeout after 10 seconds
                Serial.println("[ERROR] Serial timeout waiting for data.");
                return;
            }
        }

        String input = Serial.readStringUntil('\n');
        int separatorIndex = input.indexOf(','); // Assuming data is comma-separated
        if (separatorIndex > 0) {
            dataBuffer[i] = input.substring(0, separatorIndex).toFloat();
            ppgBuffer[i] = input.substring(separatorIndex + 1).toFloat();
        }
        else{
          i--; // Ignore Invalid Input
        }
    }

    Serial.println("[INFO] Received Data, Sending to FFT Task...");
    xQueueOverwrite(ecgQueue, dataBuffer);
    xQueueOverwrite(ppgQueue, ppgBuffer);

    
}

// Function to Find Peaks in a Signal
void findPeaks(float x[], int size, int peaks[], int &peak_count, 
               float height, float threshold, int distance, float prominence, 
               float rel_height, float min_width, float widths[]) {

    peak_count = 0;
    int last_peak_index = -distance;

    for (int i = 1; i < size - 1; i++) {  // Check one point on each side
        float current = x[i];
        float prev = x[i - 1];
        float next = x[i + 1];

        // Check if the current point is a peak
        if (current > prev && current > next &&
            current >= height && current >= threshold &&
            ((current - prev) > prominence || (current - next) > prominence)) { 

            if (i - last_peak_index >= distance) {  // Ensure minimum spacing
                last_peak_index = i;
                float peakHeight = current * rel_height;

                // Find left and right width boundaries
                int left = i, right = i;
                while (left > 0 && x[left] > peakHeight * 0.9) left--;  // Allow small buffer
                while (right < size - 1 && x[right] > peakHeight * 0.9) right++;

                float width = right - left;
                if (width >= min_width) {  // Store only if width meets minimum requirement
                    peaks[peak_count] = i;
                    widths[peak_count] = width;
                    peak_count++;                  
                }
            }
        }
    }
}

// Function to Find Valleys in a Signal
void findValleys(float x[], int size, int valleys[], int &valley_count, float height, float threshold, int distance, float prominence, float rel_height, float min_width, float widths[]) {
    valley_count = 0;
    int last_valley_index = -distance;

    float invertedMagnitude[size];
    for (int i = 0; i < size; i++) {
        invertedMagnitude[i] = -x[i];  // Invert the signal to treat valleys as peaks
    }

    for (int i = 2; i < size - 2; i++) {
        float current = invertedMagnitude[i];
        float prev1 = invertedMagnitude[i - 1], prev2 = invertedMagnitude[i - 2];
        float next1 = invertedMagnitude[i + 1], next2 = invertedMagnitude[i + 2];

        // Look for peaks in the inverted signal
        if (current > prev1 && current > next1 && current > prev2 && current > next2 && 
            current <= height && current <= threshold &&  
            (current - prev1) > prominence && (current - next1) > prominence) {

            float valleyHeight = current * rel_height;
            int left = i, right = i;
            while (left > 0 && invertedMagnitude[left] >= valleyHeight) left--;  
            while (right < size - 1 && invertedMagnitude[right] >= valleyHeight) right++;  

            float width = right - left;

            if (width >= min_width) {
                valleys[valley_count] = i;
                widths[valley_count] = width;
                valley_count++;
            }
        }
    }
}

void find_Valleys_Time(float x[], int size, int valleys[], int &valley_count, 
                 float height, float threshold, int distance, float prominence, 
                 float rel_height, float min_width, float widths[]) {
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
            current >= height && current >= threshold &&  // Adjust height comparison
            abs(current - prev1) > prominence && abs(current - next1) > prominence) {

            // Calculate width at half the valley depth
            float valleyHeight = current * rel_height;
            int left = i, right = i;
            while (left > 0 && invertedMagnitude[left] >= valleyHeight) left--;  
            while (right < size - 1 && invertedMagnitude[right] >= valleyHeight) right++;  

            float width = right - left;

            if (width >= min_width) {
                if (i - last_valley_index >= distance) {  // Ensure valley spacing
                    valleys[valley_count] = i;
                    widths[valley_count] = width;
                    valley_count++;
                    last_valley_index = i;
                }
            }
        }
    }
}

// Function to Standardize a Signal (mean = 0; std = 1)
void standardizeSignal(float signal[], int size) {
    float mean = 0.0, stdDev = 0.0;

    // Compute mean
    for (int i = 0; i < size; i++) {
        mean += signal[i];
    }
    mean /= size;

    // Compute standard deviation
    for (int i = 0; i < size; i++) {
        stdDev += pow(signal[i] - mean, 2);
    }
    stdDev = sqrt(stdDev / size);

    // Standardize signal
    for (int i = 0; i < size; i++) {
        signal[i] = (signal[i] - mean) / stdDev;
    }
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

// Function to calculate the 25th percentile
float calculatePercentile(float signal[], int size, float percentile) {
    float sorted[size];
    memcpy(sorted, signal, size * sizeof(float));  // Copy signal to sorted array

    // Bubble sort to sort the signal in ascending order (for simplicity)
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (sorted[i] > sorted[j]) {
                float temp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = temp;
            }
        }
    }

    // Calculate index for the percentile
    int index = (int)(percentile * size);
    return sorted[index];
}

// Function to find valleys
void findValleys_PPG(float ppg_segment[], int size, int valleys[], int &valley_count, float threshold) {
    valley_count = 0;

    // Iterate through the signal to detect valleys
    for (int i = 1; i < size - 1; i++) {
        // Check if the current value is lower than the neighbors (valley detection)
        if (ppg_segment[i] < ppg_segment[i - 1] && ppg_segment[i] < ppg_segment[i + 1]) {
            // Check if the valley is below the threshold, allowing for a wider range
            if (ppg_segment[i] < threshold) {
                valleys[valley_count] = i;  // Store the index of the valley
                valley_count++;
            }
        }
    }

    // Post-process to merge valleys that are too close together (if desired)
    // You can adjust the minimum distance (e.g., 5 samples) to avoid capturing the same valley multiple times
    for (int i = 1; i < valley_count; i++) {
        if (valleys[i] - valleys[i - 1] < 5) { // Merge valleys too close together
            valleys[i] = valleys[i - 1];
        }
    }
}

// Function to Find Valleys in a Signal By DeepSeek
void findValleys_DeepSeek(float x[], int size, int valleys[], int &valley_count, 
                      float height, float threshold, int distance, 
                      float prominence, float rel_height, float min_width, float widths[]) {
    valley_count = 0; // Initialize valley count to 0

    // Loop through the array to find valleys
    for (int i = 1; i < size - 1; i++) {
        // Check if the current point is a valley
        if (x[i] < x[i - 1] && x[i] < x[i + 1]) {
            // Apply height threshold
            if (x[i] <= height) {
                // Apply distance threshold
                if (valley_count == 0 || (i - valleys[valley_count - 1]) >= distance) {
                    // Apply prominence threshold (simplified)
                    float left_min = x[i];
                    float right_min = x[i];
                    for (int j = i - 1; j >= 0; j--) {
                        if (x[j] < left_min) left_min = x[j];
                    }
                    for (int j = i + 1; j < size; j++) {
                        if (x[j] < right_min) right_min = x[j];
                    }
                    float current_prominence = x[i] - fmax(left_min, right_min);

                    if (current_prominence >= prominence) {
                        // Apply minimum width threshold (simplified)
                        int left_width = 0;
                        int right_width = 0;
                        while (i - left_width >= 0 && x[i - left_width] <= x[i]) left_width++;
                        while (i + right_width < size && x[i + right_width] <= x[i]) right_width++;
                        int current_width = left_width + right_width - 1;

                        if (current_width >= min_width) {
                            // Store the valley index
                            valleys[valley_count] = i;
                            widths[valley_count] = current_width;
                            valley_count++;
                        }
                    }
                }
            }
        }
    }
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

    // Clustering neighboring peaks
    if(peak_count>0 && i-valleys[peak_count-1]<distance){
      int prevPeakWeight=ctr+1;
      peaks[peak_count]=int(floor(((peaks[peak_count-1]*(prevPeakWeight))+i)/(prevPeakWeight+1)));
      ctr++;
      continue;
    }
    else{
      ctr=0;
    }

    // Put it in peaks
    peaks[peak_count]=i;
    peak_count++;
  }
}

int calc_median_distance(int points[], int size){
  if(size<2){
    return 0;
  }
  int distances[size-1];
  for(int i=0; i<size-1; i++){
    distances[i]=points[i+1]-points[i];
  }
  if((size-1)%2==0){//if even
    return (distances[(size-1)/2]+distances[((size-1)/2)+1])/2;
  }
  else{
    return int(floor(distances[(size-1)/2]));
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
  return getStdDev(distances, size);
}
