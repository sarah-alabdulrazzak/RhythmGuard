import serial
import csv
import time
import matplotlib.pyplot as plt
import numpy as np

# Step 1: Configure Serial Communication
esp32_port = "COM3"  # Change this to your ESP32's port
baud_rate = 115200
SAMPLES = 1024  # Must match ESP32 SAMPLES
fs = 125  # Sampling frequency in Hz
timeout = 2  # Timeout for serial communication in seconds

try:
    ser = serial.Serial(esp32_port, baud_rate, timeout=timeout)
    print(f"Serial communication established on {esp32_port} with baud rate {baud_rate}")
except Exception as e:
    print(f"Failed to open serial port {esp32_port}: {e}")
    exit()

# Step 2: Read ECG and PPG Data from CSV
input_csv = "mimic_perform_non_af_009_data.csv"
print(f"Reading ECG and PPG data from {input_csv}...")
ecg_data = []
ppg_data = []

try:
    with open(input_csv, "r") as file:
        reader = csv.reader(file)
        next(reader)  # Skip the header row
        for row in reader:
            try:
                ecg_data.append(float(row[2]))  # ECG is in the third column (index 2)
                ppg_data.append(float(row[1]))  # PPG is in the second column (index 1)
            except ValueError:
                print(f"Warning: Could not convert data to float. Skipping this row.")
except FileNotFoundError:
    print(f"Error: The file {input_csv} was not found.")
    exit()

print(f"Total ECG data points: {len(ecg_data)}")
print(f"Total PPG data points: {len(ppg_data)}")

# Step 3: Send ECG and PPG Data to ESP32 in chunks
fft_results = []
print(f"Sending ECG and PPG data to ESP32 in chunks of {SAMPLES}...")

plt.figure()
plt.xlabel("Frequency (Hz)")
plt.ylabel("Magnitude")
plt.title("FFT with Peaks and Valleys")

for i in range(0, len(ecg_data), SAMPLES):
    chunk_ecg = ecg_data[i:i + SAMPLES]
    chunk_ppg = ppg_data[i:i + SAMPLES]

    if len(chunk_ecg) < SAMPLES or len(chunk_ppg) < SAMPLES:
        print(f"Warning: Remaining data chunk has less than {SAMPLES} samples, skipping.")
        break
    
    print(f"Sending chunk {i//SAMPLES + 1} of ECG and PPG data to ESP32...")

    # Send ECG and PPG data to ESP32
    for ecg_value, ppg_value in zip(chunk_ecg, chunk_ppg):
        try:
            # Prepend 'E' to ECG value and 'P' to PPG value before sending
            ser.write(f"{ecg_value},{ppg_value}\n".encode())  # Send ECG and PPG data on the same line separated by a comma
            time.sleep(0.008)  # Small delay to ensure data is sent
        except Exception as e:
            print(f"Error while sending data to ESP32: {e}")
            break

    # Step 4: Receive FFT Results from ESP32
    fft_chunk = []
    peaks_x = []
    peaks_y = []
    valleys_x = []
    valleys_y = []

    print("Receiving FFT results from ESP32...")

    # Receive FFT data (frequency, magnitude pairs)
    while True:
        line = ser.readline().decode('utf-8', errors='ignore').strip()

        if line == "Printing Peaks":
            break
        if line:  # Only process lines with a comma (i.e., frequency,magnitude)
            try:
                frequency, magnitude = map(float, line.split(","))
                fft_chunk.append((frequency, magnitude))
            except ValueError:
                print(f"Warning: Could not parse FFT result line: {line}. Skipping this line.")

    # Receive Peaks Data
    while True:
        line = ser.readline().decode('utf-8', errors='ignore').strip()

        if line == "Printing Valleys":
            break
        if line:  # Only process lines with a comma (i.e., frequency,magnitude)
            try:
                frequency, magnitude = map(float, line.split(","))
                peaks_x.append(frequency)
                peaks_y.append(magnitude)
            except ValueError:
                print(f"Warning: Could not parse peak result line: {line}. Skipping this line.")

    # Receive Valleys Data
    while True:
        line = ser.readline().decode('utf-8', errors='ignore').strip()

        if line == "End":
            break
        if line:  # Only process lines with a comma (i.e., frequency,magnitude)
            try:
                frequency, magnitude = map(float, line.split(","))
                valleys_x.append(frequency)
                valleys_y.append(magnitude)
            except ValueError:
                print(f"Warning: Could not parse valley result line: {line}. Skipping this line.")

    # Extract FFT frequencies and magnitudes
    x = [freq for freq, _ in fft_chunk]
    y = [mag for _, mag in fft_chunk]

    # Plot the FFT data
    plt.cla()
    plt.plot(x, y, color='b', label="FFT")  # FFT data in blue

    # Plot Peaks (if available)
    if peaks_x:
        plt.scatter(peaks_x, peaks_y, color='r', label=f"Peaks ({len(peaks_x)})")

    # Plot Valleys (if available)
    if valleys_x:
        plt.scatter(valleys_x, valleys_y, color='g', label=f"Valleys ({len(valleys_x)})")

    plt.xlabel("Frequency (Hz)")
    plt.ylabel("Magnitude")
    plt.title("FFT with Peaks and Valleys")
    plt.xlim(0,20)
    plt.legend()
    plt.pause(0.1)  # Pause to update the plot

    # Store FFT results
    fft_results.extend(fft_chunk)

plt.close()