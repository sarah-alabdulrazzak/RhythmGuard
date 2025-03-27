import threading
import serial
import csv
import serial.tools.list_ports
from tkinter import *
from tkinter.ttk import Combobox  
import matplotlib.pyplot as plt
esp32_port = ""
baud_rate = 115200
timeout = 5  # Timeout for serial communication in seconds

def scan_ports():
    ports = serial.tools.list_ports.comports()
    sorted_ports = sorted(ports, key=lambda p: int(p.device[3:]) if p.device[3:].isdigit() else float('inf'))
    port_names = [port.device for port in sorted_ports]  # Get a list of port names
    root.after(0, update_combobox, port_names) 

def update_combobox(port_list):
    port_combo['values'] = port_list  # Update combobox values
    if port_list:
        port_combo.current(0)  # Select the first port by default

def choose_port():
    global esp32_port
    esp32_port = port_combo.get()

    # Connect to ESP32
    try:
        ser = serial.Serial(esp32_port, baud_rate, timeout=timeout)
        print(f"Serial communication established on {esp32_port} with baud rate {baud_rate}")
        connect = Label(root, text='Connected!')
        connect.pack()
    except Exception as e:
        print(f"Failed to open serial port {esp32_port}: {e}")
        not_connect = Label(root, text='Connection Failed')
        not_connect.pack()
def select_data(type):
    if (type == "healthy"):
        input_csv = r"C:\Users\kavya\OneDrive\Documents\GitHub\RhythmGuard\FeatureValidation\data\mimic_perform_non_af_001_data.csv"
    elif (type == "bradycardia"):
        input_csv = r"C:\Users\kavya\OneDrive\Documents\GitHub\RhythmGuard\FeatureValidation\data\brady0.csv"
    elif (type == "tachycardia"):
        input_csv = r"C:\Users\kavya\OneDrive\Documents\GitHub\RhythmGuard\FeatureValidation\data\tachy0.csv"
    elif (type == "afib"):
        input_csv = r"C:\Users\kavya\OneDrive\Documents\GitHub\RhythmGuard\FeatureValidation\data\mimic_perform_af_001_data.csv"
    elif (type == "v_fib"):
        input_csv = r"C:\Users\kavya\OneDrive\Documents\GitHub\RhythmGuard\FeatureValidation\data\v_fib0.csv"
    elif (type == "v_tachy"):
        input_csv = r"C:\Users\kavya\OneDrive\Documents\GitHub\RhythmGuard\FeatureValidation\data\v_tachy0.csv"             
    print(f"Reading ECG and PPG data from {input_csv}...")
    ecg_data = []
    ppg_data = []
    
    try:
        with open(input_csv, "r") as file:
            reader = csv.reader(file)
            next(reader)  # Skip the header row
            for row in reader:
                try:
                    ecg_data.append(float(row[0]))  # ECG is in the first column (index 2)
                    ppg_data.append(float(row[1]))  # PPG is in the second column (index 1)
                except ValueError:
                    print(f"Warning: Could not convert data to float. Skipping this row.")
    except FileNotFoundError:
        print(f"Error: The file {input_csv} was not found.")
        exit()
    
    plt.cla()
    plt.plot(range(len(ecg_data)), ecg_data, color='b', label="FFT")  # FFT data in blue

# Create GUI
root = Tk()
root.title('RhythmGuard')

w = Label(root, text='Welcome!')
w.pack()

button1 = Button(root, text='Healthy', width=15, command= lambda: select_data("healthy"))
button1.pack()

button2 = Button(root, text='Bradycardia', width=15, command= lambda: select_data("bradycardia"))
button2.pack()

button3 = Button(root, text='Tachycardia', width=15, command= lambda: select_data("tachycardia"))
button3.pack()

button4 = Button(root, text='Atrium Fibrillation', width=15, command= lambda: select_data("afib"))
button4.pack()

button5 = Button(root, text='Ventricular Fibrillation', width=15, command= lambda: select_data("v_fib"))
button5.pack()

button6 = Button(root, text='Ventricular Tachycardia', width=15, command= lambda: select_data("v_tachy"))
button6.pack()

# Create an empty Combobox
port_combo = Combobox(root)
port_combo.pack(pady=5)

# Run port scanning in a separate thread
threading.Thread(target=scan_ports, daemon=True).start()

select_port = Button(root, text='Select Port', width=15, command=choose_port)
select_port.pack()


root.mainloop()
