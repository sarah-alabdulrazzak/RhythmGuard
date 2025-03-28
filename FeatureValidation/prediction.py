import serial
import csv
import time
import pandas as pd

# Step 1: Configure Serial Communication
esp32_port = "/dev/cu.usbserial-14110"  # Change this to your ESP32's port
baud_rate = 115200
SAMPLES = 1024  # Must match ESP32 SAMPLES
timeout = 2  # Timeout for serial communication in seconds

try:
    ser = serial.Serial(esp32_port, baud_rate, timeout=timeout)
    print(f"Serial communication established on {esp32_port} with baud rate {baud_rate}")
except Exception as e:
    print(f"Failed to open serial port {esp32_port}: {e}")
    exit()

# Step 2: Read ECG and PPG Data from CSV
input_csv = "FeatureValidation/data/mimic_perform_non_af_003_data.csv"
print(f"Reading ECG and PPG data from {input_csv}...")
ecg_data = []
ppg_data = []

'''try:
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
    exit()'''
df=pd.read_csv(input_csv)
ecg_data=df["ECG"].values
ppg_data=df["PPG"].values

print(f"Total ECG data points: {len(ecg_data)}")
print(f"Total PPG data points: {len(ppg_data)}")

# Step 3: Send ECG and PPG Data to ESP32 in chunks
print(f"Sending ECG and PPG data to ESP32 in chunks of {SAMPLES}...")

for i in range(0, len(ecg_data), SAMPLES):
    chunk_ecg = ecg_data[i:i + SAMPLES]
    chunk_ppg = ppg_data[i:i + SAMPLES]

    if len(chunk_ecg) < SAMPLES or len(chunk_ppg) < SAMPLES:
        print(f"Warning: Remaining data chunk has less than {SAMPLES} samples, skipping.")
        break
    print("----------")
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

    # Step 4: Receive Predicted Class from ESP32
    while True:
        line = ser.readline().decode('utf-8', errors='ignore').strip()
        if line.startswith("Predicted Class:"):
            try:
                predicted_class = float(line.split(":")[1].strip())
                if(predicted_class==0):
                    predicted_class_str="A_Fib"
                elif(predicted_class==1):
                    predicted_class_str="Bradycardia"
                elif(predicted_class==2):
                    predicted_class_str="Healthy"
                elif(predicted_class==3):
                    predicted_class_str="Tachycardia"
                elif(predicted_class==4):
                    predicted_class_str="Ventricular_Flutter_Fib"
                else:
                    predicted_class_str="Ventricular_Tachycardia"
                print(f"Predicted Class: {predicted_class_str}")
                break
            except ValueError as e:
                print(e)
                print(f"Warning: Could not parse predicted class line: {line}. Skipping this line.")
        else:
            if(line.startswith('[')):
                pass
            elif(line=="End"):
                print("----------")
            else:
                print(line)