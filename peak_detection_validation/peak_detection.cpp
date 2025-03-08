#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <complex>
#include <Python.h>
#include <fftw3.h>
#include "matplotlibcpp.h"

namespace plt = matplotlibcpp;

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
// Function to read ECG data from CSV
std::vector<double> readECG(const std::string &filename) {
    std::vector<double> ecg;
    std::ifstream file(filename);
    std::string line, value;
    
    if (!file.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return ecg;
    }
    
    std::getline(file, line); // Skip header
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::getline(ss, value, ','); // Assume ECG is the first column
        ecg.push_back(std::stod(value));
    }
    
    return ecg;
}

// Function to compute FFT
std::vector<std::complex<double>> computeFFT(const std::vector<double> &signal) {
    size_t N = signal.size();
    std::vector<std::complex<double>> freqDomain(N);
    fftw_complex *in = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * N);
    fftw_complex *out = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * N);
    fftw_plan plan = fftw_plan_dft_r2c_1d(N, reinterpret_cast<double*>(in), out, FFTW_ESTIMATE);
    
    for (size_t i = 0; i < N; ++i) {
        in[i][0] = signal[i];
        in[i][1] = 0.0;
    }
    
    fftw_execute(plan);
    for (size_t i = 0; i < N; ++i) {
        freqDomain[i] = {out[i][0], out[i][1]};
    }
    
    fftw_destroy_plan(plan);
    fftw_free(in);
    fftw_free(out);
    
    return freqDomain;
}

// Function to compute magnitude spectrum
std::vector<double> getMagnitude(const std::vector<std::complex<double>> &freqData) {
    std::vector<double> magnitude(freqData.size());
    for (size_t i = 0; i < freqData.size(); ++i) {
        magnitude[i] = std::abs(freqData[i]);
    }
    return magnitude;
}

//void findPeaks(float x[], int size, int peaks[], int &peakCount, float height, float threshold, int distance, float prominence, float width, float rel_height, float widths[]);

// Function to plot signals with peaks
void plotSignalWithPeaks(const std::vector<double> &signal, const std::vector<int> &peaks, const std::string &title) {
    std::vector<double> peakX, peakY;
    for (int peak : peaks) {
        peakX.push_back(peak);
        peakY.push_back(signal[peak]);
    }
    plt::figure();
    plt::plot(signal);
    plt::scatter(peakX, peakY, 50, {"red"});
    plt::title(title);
}

int main() {
    std::string filename = "AFib_data.csv";
    std::vector<double> ecg = readECG(filename);
    if (ecg.empty()) return 1;
    
    int peakCount = 0;
    int peaks[ecg.size()];
    float widths[ecg.size()];
    findPeaks(ecg.data(), ecg.size(), peaks, peakCount, 1, 0.005, 0.3*125, 0.2, 0, 0, widths);
    
    std::vector<int> timePeaks(peaks, peaks + peakCount);
    plotSignalWithPeaks(ecg, timePeaks, "Time Domain ECG with Peaks");
    
    std::vector<std::complex<double>> fftData = computeFFT(ecg);
    std::vector<double> magnitude = getMagnitude(fftData);
    
    peakCount = 0;
    findPeaks(magnitude.data(), magnitude.size(), peaks, peakCount, 0, 0, 5, 0.0005, 1, 1.5, widths);
    std::vector<int> freqPeaks(peaks, peaks + peakCount);
    plotSignalWithPeaks(magnitude, freqPeaks, "Frequency Domain (FFT) with Peaks");
    
    plt::show();
    return 0;
}