import serial
import csv
import time
import matplotlib.pyplot as plt
import pandas as pd
import numpy as np

# Step 1: Configure Serial Communication
esp32_port = "COM3"  # Change this to your ESP32's port
baud_rate = 115200
SAMPLES = 1024  # Must match ESP32 SAMPLES
fs=125
try:
    ser = serial.Serial(esp32_port, baud_rate, timeout=1)
    print(f"Serial communication established on {esp32_port} with baud rate {baud_rate}")
except Exception as e:
    print(f"Failed to open serial port {esp32_port}: {e}")
    exit()
# Step 2: Read ECG Data from CSV
input_csv = "data.csv"  # Replace with your input file
output_csv = "fft_results.csv"
print(f"Reading ECG data from {input_csv}...")
ecg_data = []
try:
    with open(input_csv, "r") as file:
        reader = csv.reader(file)
        next(reader)  # Skip the header row
        for row in reader:
            try:
                ecg_data.append(float(row[2]))  # Assuming data is in the third column (index 2)
            except ValueError as e:
                print(f"Warning: Could not convert {row[2]} to float. Skipping this row.")
except FileNotFoundError:
    print(f"Error: The file {input_csv} was not found.")
    exit()
print(f"Total ECG data points read: {len(ecg_data)}")
# Step 3: Send ECG Data to ESP32 in chunks
fft_results = []
print(f"Sending ECG data to ESP32 in chunks of {SAMPLES}...")


x = []
y = []
plt.figure()
plt.xlabel("Frequency (Hz)")
plt.ylabel("Magnitude ()")
plt.title("FFT")

for i in range(0, len(ecg_data), SAMPLES):
    chunk = ecg_data[i:i + SAMPLES]
    # Ensure the chunk has the required number of samples
    if len(chunk) < SAMPLES:
        print(f"Warning: Remaining data chunk has less than {SAMPLES} samples, skipping.")
        break
    print(f"Sending chunk {i//SAMPLES + 1} of ECG data to ESP32...")
    
    # Send chunk to ESP32
    for value in chunk:
        try:
            ser.write(f"{value}\n".encode())
            time.sleep(0.001)  # Small delay to ensure data is sent
        except Exception as e:
            print(f"Error while sending data to ESP32: {e}")
            break
    # Step 4: Receive FFT Results from ESP32
    fft_chunk = []
    peaks_x = []
    peaks_y = []
    print("Receiving FFT results from ESP32...")

    resolution = fs/SAMPLES
    x_linspace = np.linspace(0, fs / 2, num=SAMPLES // 2, endpoint=False)

    while len(fft_chunk) < SAMPLES // 2:
        line = ser.readline().decode().strip()
        if line == "Printing peaks":
            break        
        if line:
            try:
                frequency, magnitude = map(float, line.split(","))
                fft_chunk.append((frequency, magnitude))
                x.append(frequency)
                y.append(magnitude)
            except ValueError as e:
                print(f"Warning: Could not parse FFT result line: {line}. Skipping this line.")
                continue
    #peaks
    while True:
        line = ser.readline().decode().strip()
        if line == "End":
            break
        if line:
            try:
                frequency, magnitude = map(float, line.split(","))
                peaks_x.append(frequency) 
                peaks_y.append(magnitude)
            except ValueError as e:
                print(f"Warning: Could not parse FFT result line: {line}. Skipping this line.")
                continue     
    print("\n", peaks_x)      
    print("\n", peaks_y)

  
    plt.cla()
    plt.plot(x_linspace,y, color = 'b')
    plt.scatter(peaks_x, peaks_y, color='r')
    plt.xlabel("Frequency (Hz)")
    plt.ylabel("Magnitude")
    plt.xlim([0,20])
    plt.title("FFT")
    plt.pause(0.1)
    x = []
    y = []
    fft_results.extend(fft_chunk)
plt.close()

# Step 5: Write FFT Results to Output CSV
print(f"Writing FFT results to {output_csv}...")
try:
    with open(output_csv, "w", newline="") as file:
        writer = csv.writer(file)
        writer.writerow(["Frequency (Hz)", "Magnitude"])
        writer.writerows(fft_results)
    print(f"FFT results successfully written to {output_csv}")
except Exception as e:
    print(f"Error while writing FFT results to file: {e}")