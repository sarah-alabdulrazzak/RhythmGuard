import threading
import serial
import serial.tools.list_ports
from tkinter import *
from tkinter.ttk import Combobox  
import pandas as pd
import time
import matplotlib.pyplot as plt
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg

esp32_port = ""
baud_rate = 115200
SAMPLES = 1024  
timeout = 5  
ser = None
predicted_class = -1

def scan_ports():
    ports = serial.tools.list_ports.comports()
    sorted_ports = sorted(ports, key=lambda p: int(p.device[3:]) if p.device[3:].isdigit() else float('inf'))
    port_names = [port.device for port in sorted_ports]
    root.after(0, update_combobox, port_names)  

def update_combobox(port_list):
    port_combo['values'] = port_list  
    if port_list:
        port_combo.current(0)  

def disconnect():
    global ser
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
        connect.config(text='Connected!')
        select_port.config(state=DISABLED)
        disconnect_btn.config(state=NORMAL)
    except Exception as e:
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
        return
    
    df = pd.read_csv(input_csv)
    ecg_data, ppg_data = df["ECG"].values, df["PPG"].values

    for i in range(0, len(ecg_data), SAMPLES):
        chunk_ecg, chunk_ppg = ecg_data[i:i + SAMPLES], ppg_data[i:i + SAMPLES]
        if len(chunk_ecg) < SAMPLES:
            break

        for ecg_value, ppg_value in zip(chunk_ecg, chunk_ppg):
            try:
                ser.write(f"{ecg_value},{ppg_value}\n".encode())
                time.sleep(0.008)
            except Exception as e:
                return
        
        threading.Thread(target=receive_prediction, daemon=True).start()
        update_plot(chunk_ecg, chunk_ppg)

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

# Function to Embed ECG Plot in GUI
def update_plot(ecg_chunk, ppg_chunk):
    ax1.clear()
    ax1.plot(ecg_chunk, color='b', label="ECG Signal")
    ax1.set_xlabel("Time")
    ax1.set_ylabel("Amplitude")
    ax1.set_title("ECG Waveform")
    ax1.legend()
    ax1.grid()

    ax2.clear()
    ax2.plot(ppg_chunk, color='b', label="PPG Signal")
    ax2.set_xlabel("Time")
    ax2.set_ylabel("Amplitude")
    ax2.set_title("PPG Waveform")
    ax2.legend()
    ax2.grid()

    canvas.draw()  

# GUI Setup
root = Tk()
root.title('RhythmGuard')
root.configure(background='#de528f')

fig, (ax1, ax2) = plt.subplots(2, 1)
fig.suptitle('Chunk Data')
plt.subplots_adjust(hspace=0.5)

# Left Panel - Buttons
left_frame = Frame(root, bg= "#de528f")
left_frame.grid(row=0, column=0, padx=10, pady=10, sticky="n")

Label(left_frame, text='Welcome!').grid(row=0, column=0, pady=5)

buttons = ["Healthy", "Bradycardia", "Tachycardia", "Atrium Fibrillation", "Ventricular Fibrillation", "Ventricular Tachycardia"]
data_types = ["healthy", "bradycardia", "tachycardia", "afib", "v_fib", "v_tachy"]
for i, (text, dtype) in enumerate(zip(buttons, data_types)):
    Button(left_frame, text=text, width=20, command=lambda dt=dtype: select_data(dt), bg='#e38fb3', fg='white').grid(row=i+1, column=0, pady=2)

Label(left_frame, text="Select COM Port:").grid(row=len(buttons) + 1, column=0, pady=5)
port_combo = Combobox(left_frame)
port_combo.grid(row=len(buttons) + 2, column=0, pady=5)
threading.Thread(target=scan_ports, daemon=True).start()

select_port = Button(left_frame, text='Select Port', width=20, command=choose_port, bg='#e38fb3', fg='white')
select_port.grid(row=len(buttons) + 3, column=0, pady=2)
disconnect_btn = Button(left_frame, text='Disconnect', width=20, command=disconnect, bg='#e38fb3', fg='white')
disconnect_btn.grid(row=len(buttons) + 4, column=0, pady=2)
connect = Label(left_frame, text='')
connect.grid(row=len(buttons) + 5, column=0, pady=2)
result_txt = Label(left_frame, text='')
result_txt.grid(row=len(buttons) + 6, column=0, pady=5)

# Right Panel - Graphs
right_frame = Frame(root, bg= "#de528f")
right_frame.grid(row=0, column=1, padx=10, pady=10, sticky="n")

canvas = FigureCanvasTkAgg(fig, master=right_frame)
canvas.get_tk_widget().pack()

root.mainloop()
