import threading
import serial
import csv
import serial.tools.list_ports
from tkinter import *
from tkinter.ttk import Combobox  
import pandas as pd
import time

esp32_port = ""
baud_rate = 115200
SAMPLES = 1024  # Must match ESP32 SAMPLES
timeout = 5  # Timeout for serial communication in seconds
ser = None
predicted_class = -1

def scan_ports():
    ports = serial.tools.list_ports.comports()
    sorted_ports = sorted(ports, key=lambda p: int(p.device[3:]) if p.device[3:].isdigit() else float('inf'))
    port_names = [port.device for port in sorted_ports]
    root.after(0, update_combobox, port_names) 

def update_combobox(port_list):
    port_combo['values'] = port_list  # Update combobox values
    if port_list:
        port_combo.current(0)  # Select the first port by default

def disconnect():
    global ser, esp32_port
    select_port.config(state=NORMAL)
    disconnect_btn.config(state=DISABLED)
    if ser:
        ser.close()
    connect.config(text='Disconnected')

def choose_port():
    global esp32_port, ser
    esp32_port = port_combo.get()
    try:
        ser = serial.Serial(esp32_port, baud_rate, timeout=timeout)
        print(f"Serial communication established on {esp32_port} with baud rate {baud_rate}")
        connect.config(text='Connected!')
        select_port.config(state=DISABLED)
        disconnect_btn.config(state=NORMAL)
    except Exception as e:
        print(f"Failed to open serial port {esp32_port}: {e}")
        connect.config(text='Connection Failed')

def select_data(data_type):
    threading.Thread(target=send_data_to_esp32, args=(data_type,), daemon=True).start()

def send_data_to_esp32(data_type):
    global ser
    file_paths = {
        "healthy": r"C:\Users\kavya\OneDrive\Documents\GitHub\RhythmGuard\FeatureValidation\data\mimic_perform_non_af_005_data.csv",
        "bradycardia": r"C:\Users\kavya\OneDrive\Documents\GitHub\RhythmGuard\FeatureValidation\data\brady0.csv",
        "tachycardia": r"C:\Users\kavya\OneDrive\Documents\GitHub\RhythmGuard\FeatureValidation\data\tachy0.csv",
        "afib": r"C:\Users\kavya\OneDrive\Documents\GitHub\RhythmGuard\FeatureValidation\data\mimic_perform_af_001_data.csv",
        "v_fib": r"C:\Users\kavya\OneDrive\Documents\GitHub\RhythmGuard\FeatureValidation\data\v_fib0.csv",
        "v_tachy": r"C:\Users\kavya\OneDrive\Documents\GitHub\RhythmGuard\FeatureValidation\data\v_tachy0.csv"   
    }
    
    input_csv = file_paths.get(data_type, "")
    if not input_csv:
        print("Invalid data type selected")
        return
    
    df = pd.read_csv(input_csv)
    ecg_data, ppg_data = df["ECG"].values, df["PPG"].values

    print(f"Sending ECG and PPG data to ESP32 in chunks of {SAMPLES}...")
    for i in range(0, len(ecg_data), SAMPLES):
        chunk_ecg, chunk_ppg = ecg_data[i:i + SAMPLES], ppg_data[i:i + SAMPLES]
        if len(chunk_ecg) < SAMPLES or len(chunk_ppg) < SAMPLES:
            break
        for ecg_value, ppg_value in zip(chunk_ecg, chunk_ppg):
            try:
                ser.write(f"{ecg_value},{ppg_value}\n".encode())
                time.sleep(0.008)
            except Exception as e:
                print(f"Error while sending data: {e}")
                return
        threading.Thread(target=receive_prediction, daemon=True).start()

def receive_prediction():
    global predicted_class
    while True:
        line = ser.readline().decode('utf-8', errors='ignore').strip()
        if line.startswith("Predicted Class:"):
            try:
                predicted_class = int(float(line.split(":")[1].strip()))
                update_result_label(predicted_class)
                break
            except ValueError:
                continue

def update_result_label(predicted_class):
    conditions = {
        0: "Atrial Fibrillation",
        1: "Bradycardia",
        2: "Healthy!",
        3: "Tachycardia",
        4: "Ventricular Flutter Fibrillation",
        5: "Ventricular Tachycardia"
    }
    text = f"You have: {conditions.get(predicted_class, 'Unknown Condition')}"
    root.after(0, lambda: result_txt.config(text=text))

# GUI Setup
root = Tk()
root.title('RhythmGuard')
Label(root, text='Welcome!').pack()

buttons = ["Healthy", "Bradycardia", "Tachycardia", "Atrium Fibrillation", "Ventricular Fibrillation", "Ventricular Tachycardia"]
data_types = ["healthy", "bradycardia", "tachycardia", "afib", "v_fib", "v_tachy"]
for text, dtype in zip(buttons, data_types):
    Button(root, text=text, width=15, command=lambda dt=dtype: select_data(dt)).pack()

port_combo = Combobox(root)
port_combo.pack(pady=5)
threading.Thread(target=scan_ports, daemon=True).start()

select_port = Button(root, text='Select Port', width=15, command=choose_port)
select_port.pack()
disconnect_btn = Button(root, text='Disconnect', width=15, command=disconnect)
disconnect_btn.pack()
connect = Label(root, text='')
connect.pack()
result_txt = Label(root, text='')
result_txt.pack()

root.mainloop()
