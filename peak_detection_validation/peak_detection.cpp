#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <complex>
#include <fftw3.h>
#include <cmath>

void standardizeArray(double arr[], int size) {
    if (size == 0) return;

    // Compute mean
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double mean = sum / size;

    // Compute standard deviation
    double sqSum = 0.0;
    for (int i = 0; i < size; i++) {
        sqSum += (arr[i] - mean) * (arr[i] - mean);
    }
    double stdDev = std::sqrt(sqSum / size);

    // Standardize array
    for (int i = 0; i < size; i++) {
        arr[i] = (arr[i] - mean) / stdDev;
    }

    return;
}


void findPeaks(double x[], int size, int peaks[], int &peakCount, double height, double threshold, int distance, double prominence, double width, double rel_height, double widths[]) {
    peakCount = 0;
    
    for (int i = 1; i < size - 1; i++) {
        if (x[i] > x[i - 1] && x[i] > x[i + 1]) {  // Local maxima condition
            double leftDiff = x[i] - x[i - 1];
            double rightDiff = x[i] - x[i + 1];
            
            if (x[i] >= height && x[i] >= threshold && leftDiff >= prominence && rightDiff >= prominence) {
                // Ensure distance condition is met
                if (peakCount == 0 || (i - peaks[peakCount - 1]) >= distance) {
                    peaks[peakCount] = i;
                    
                    // Calculate width at relative height
                    double peakHeight = x[i] * rel_height;
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

        std::getline(ss, value, ',');
        std::getline(ss, value, ',');
        std::getline(ss, value, ',');

        ecg.push_back(std::stod(value));
    }
    
    return ecg;
}

// Function to compute FFT
std::vector<std::complex <double> > computeFFT(const std::vector<double> &signal) {
    size_t N = signal.size();
    std::vector<std::complex <double> > freqDomain(N/2 +1);
    double *in = (double*) fftw_malloc(sizeof(double) * N);
    fftw_complex *out = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) * (N/2 + 1));
    fftw_plan plan = fftw_plan_dft_r2c_1d(N, in, out, FFTW_ESTIMATE);
    
    for (size_t i = 0; i < N; ++i) {
        in[i] = signal[i];
    }
    
    fftw_execute(plan);
    for (size_t i = 0; i < N/2 + 1; ++i) {
        freqDomain[i] = std::complex<double>(out[i][0], out[i][1]);
    }    
    
    fftw_destroy_plan(plan);
    fftw_free(in);
    fftw_free(out);
    
    return freqDomain;
}

// Function to compute magnitude spectrum
std::vector<double> getMagnitude(const std::vector<std::complex<double> > &freqData) {
    std::vector<double> magnitude(freqData.size());
    for (size_t i = 0; i < freqData.size(); ++i) {
        magnitude[i] = std::abs(freqData[i]);
    }
    return magnitude;
}

void plotWithGnuplot(const double signal[], int size, const std::vector<int> &peaks, const std::string &title, const std::string &filename) {
    std::ofstream dataFile(filename+".dat");
    if (!dataFile) {
        std::cerr << "Error: Cannot open file for writing!" << std::endl;
        return;
    }

    // Write time series data
    for (size_t i = 0; i < size; i++) {
        dataFile << i << " " << signal[i] << "\n";
    }
    dataFile.close();

    // Write peak data
    std::ofstream peakFile(filename + "_peaks.dat");
    for (int peak : peaks) {
        peakFile << peak << " " << signal[peak] << "\n";
    }
    peakFile.close();

    // Send plot commands to gnuplot
    FILE *gnuplotPipe = popen("gnuplot -persist", "w");
    if (gnuplotPipe) {
        fprintf(gnuplotPipe, "set title '%s'\n", title.c_str());
        fprintf(gnuplotPipe, "plot '%s.dat' using 1:2 with lines title 'Signal', '%s_peaks.dat' using 1:2 with points pt 7 lc 'red' title 'Peaks'\n", (filename).c_str(), (filename).c_str());
        fflush(gnuplotPipe);
        pclose(gnuplotPipe);
    } else {
        std::cerr << "Error: Could not open gnuplot!" << std::endl;
    }
}

int main() {
    std::string filename = "mimic_perform_non_af_009_data.csv";
    std::vector<double> ecgFull = readECG(filename);
    std::vector<double> ecgVec(ecgFull.begin() + 19000, ecgFull.begin() + 20000);
    if (ecgVec.empty()) return 1;

    // Convert vector to raw array
    int size = ecgVec.size();
    double *ecg = new double[size];
    for (int i = 0; i < size; i++) {
        ecg[i] = static_cast<double>(ecgVec[i]);
    }

    standardizeArray(ecg, ecgVec.size());

    int peakCount = 0;
    int *peaks = new int[size];
    double *widths = new double[size];

    std::cout<<ecg;

    findPeaks(ecg, size, peaks, peakCount, 1, 0.005, 0.3 * 125, 0.2, 0, 0, widths);

    std::vector<int> timePeaks(peaks, peaks + peakCount);
    plotWithGnuplot(ecg, size, timePeaks, "Time Domain ECG with Peaks", "time_signal");

    std::vector<std::complex<double> > fftData = computeFFT(ecgVec);
    std::vector<double> magnitudeVecFull = getMagnitude(fftData);
    std::vector<double> magnitudeVec(magnitudeVecFull.begin()+500 , magnitudeVecFull.begin() +1000);

    // Convert vector to raw array
    size = magnitudeVec.size();
    double *magnitude = new double[size];
    for (int i = 0; i < size; i++) {
        magnitude[i] = static_cast<double>(magnitudeVec[i]);
    }

    peakCount = 0;
    findPeaks(magnitude, magnitudeVec.size(), peaks, peakCount, 0, 0, 5, 0.0005, 1, 1.5, widths);
    std::vector<int> freqPeaks(peaks, peaks + peakCount);
    plotWithGnuplot(magnitude, size, freqPeaks, "Frequency Domain (FFT) with Peaks", "freq_signal");

    // Cleanup dynamically allocated arrays
    delete[] ecg;
    delete[] peaks;
    delete[] widths;

    return 0;
}
