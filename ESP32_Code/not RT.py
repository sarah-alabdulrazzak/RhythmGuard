import serial
import csv
import time

# Step 1: Configure Serial Communication
esp32_port = "COM5"  # Change this to your ESP32's port
baud_rate = 115200
try:
    ser = serial.Serial(esp32_port, baud_rate, timeout=1)
    print(f"Serial communication established on {esp32_port} with baud rate {baud_rate}")
except Exception as e:
    print(f"Failed to open serial port {esp32_port}: {e}")
    exit()

# Step 2: Read ECG Data from CSV
input_csv = "C:/Users/marye/Downloads/fft_with_plotting/data.csv"  # Replace with your input file
output_csv = "C:/Users/marye/Downloads/fft_with_plotting/fft_results.csv"

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
SAMPLES = 128  # Must match ESP32 SAMPLES
fft_results = []
print(f"Sending ECG data to ESP32 in chunks of {SAMPLES}...")

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
            time.sleep(0.01)  # Small delay to ensure data is sent
        except Exception as e:
            print(f"Error while sending data to ESP32: {e}")
            break

    # Step 4: Receive FFT Results from ESP32
    fft_chunk = []
    print("Receiving FFT results from ESP32...")
    while len(fft_chunk) < SAMPLES // 2:
        line = ser.readline().decode().strip()
        if line:
            try:
                frequency, magnitude = map(float, line.split(","))
                fft_chunk.append((frequency, magnitude))
            except ValueError as e:
                print(f"Warning: Could not parse FFT result line: {line}. Skipping this line.")
                continue

    fft_results.extend(fft_chunk)

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
