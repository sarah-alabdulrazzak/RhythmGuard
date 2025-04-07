import threading
import serial
import serial.tools.list_ports
from tkinter import *
from tkmacosx import Button
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
current_button = None 
stop_receiving = False  
stop_sending = False

def stop():
    global ser, current_button, stop_receiving, stop_sending, esp32_port
    print("Stopping everything and resetting...")  # Debug

    # Enable the port selection combobox and reset the button
    select_port.config(state=NORMAL)
    stop_btn.config(state=DISABLED)
    
    # Reset flags to ensure threads stop
    stop_receiving = True
    stop_sending = True

    # Close serial connection properly
    if ser:
        ser.close()
        ser = None  # Reset the serial object

    # Reset the selected port
    esp32_port = ""

    # Reset the current button
    if current_button:
        current_button.config(bg='#e38fb3', fg='white')  # Reset button appearance
        current_button = None
    
    # Clear the result label and reset its background color
    result_txt.config(text='', bg='#de528f')  # Reset the result text and color

    # Reset the plots
    ax1.clear()
    ax2.clear()
    ax1.set_title("ECG Signal")
    ax2.set_title("PPG Signal")
    canvas.draw()  # Redraw the canvas with the cleared plots

    # Reset connection status
    connect.config(text='Stopped', bg='#de528f', fg='white', borderwidth=0, relief='flat', font=('Helvetica', 12, 'bold'))

    # Allow the system to be ready for future data transmission
    stop_receiving = stop_sending = False

def scan_ports():
    print("Scanning for available serial ports...")  # Debug
    ports = serial.tools.list_ports.comports()
    sorted_ports = sorted(ports, key=lambda p: int(p.device[3:]) if p.device[3:].isdigit() else float('inf'))
    port_names = [port.device for port in sorted_ports]
    print(f"Found ports: {port_names}")  # Debug
    root.after(0, update_combobox, port_names)  # Update the combobox UI

def update_combobox(port_list):
    print(f"Updating combobox with ports: {port_list}")  # Debug
    port_combo['values'] = port_list  
    if port_list:
        port_combo.current(0)  # Set the first available port as the current selection

def disconnect():
    global ser, current_button, stop_receiving
    print("Disconnecting from ESP32...")  # Debug
    select_port.config(state=NORMAL)
    stop_btn.config(state=DISABLED)
    
    if ser:
        ser.close()
        ser = None  # Make sure to reset the serial object
        
    stop_receiving = True  # Set flag to stop receiving data

    if current_button:
        current_button.config(bg='#e38fb3', fg='white')  # Reset the button to its original state
        current_button = None  # Reset the current button

    connect.config(text='Disconnected', bg='#de528f', fg='white', borderwidth=0, relief='flat', font=('Helvetica', 12, 'bold'))
    result_txt.config(text='', bg='#de528f')  # Clear the result text

def choose_port():
    global esp32_port, ser
    esp32_port = port_combo.get()
    print(f"Attempting to connect to port: {esp32_port}")  # Debug
    try:
        ser = serial.Serial(esp32_port, baud_rate, timeout=timeout)
        print(f"Connected to {esp32_port}")  # Debug
        connect.config(text='Connected!', bg='#de528f', fg='white', borderwidth=0, relief='flat', font=('Helvetica', 12, 'bold'))  # Bold font
        select_port.config(state=DISABLED)
        stop_btn.config(state=NORMAL)
    except Exception as e:
        print(f"Connection failed: {e}")  # Debug
        connect.config(text='Connection Failed')

def select_data(data_type, button):
    global current_button
    print(f"Selecting data type: {data_type}")  # Debug
    # Change the background color and text color of the pressed button
    if current_button:
        current_button.config(bg='#e38fb3', fg='white')  # Reset the background color and text color of the previous button
    button.config(bg='#d3d3d3', fg='#A9A9A9')  # Set the background color to grey and text color to dark grey
    current_button = button  # Update the current button
    # Start sending data in a separate thread
    threading.Thread(target=send_data_to_esp32, args=(data_type,), daemon=True).start()

def send_data_to_esp32(data_type):
    global ser
    file_paths = {
        "healthy": r"healthy.csv",
        "bradycardia": r"brady0.csv",
        "tachycardia": r"tachy1.csv",
        "afib": r"mimic_perform_af_012_data.csv",
        "v_fib": r"v_fib3.csv",
        "v_tachy": r"v_tachy4.csv"   
    }
    
    input_csv = file_paths.get(data_type, "")
    if not input_csv:
        return
    
    df = pd.read_csv(input_csv)
    ecg_data = df["ECG"].values
    ppg_data = df["PPG"].values

    # Skip the first 5 chunks
    skip_chunks = 5
    chunk_count = 0

    for i in range(0, len(ecg_data), SAMPLES):
        if chunk_count < skip_chunks:
            chunk_count += 1
            continue  # Skip the first 5 chunks

        chunk_ecg = ecg_data[i:i + SAMPLES]
        chunk_ppg = ppg_data[i:i + SAMPLES]

        if len(chunk_ecg) < SAMPLES or len(chunk_ppg) < SAMPLES:
            print(f"Warning: Remaining data chunk has less than {SAMPLES} samples, skipping.")
            break

        print("----------")
        print(f"Sending chunk {i//SAMPLES + 1} of ECG and PPG data to ESP32...")

        for ecg_value, ppg_value in zip(chunk_ecg, chunk_ppg):
            if stop_sending:
                print("Data sending stopped.")
                break
            try:
                ser.write(f"{ecg_value},{ppg_value}\n".encode())  
                time.sleep(0.008)
            except Exception as e:
                print(f"Error while sending data to ESP32: {e}")
                break
        if stop_sending:
            break

        threading.Thread(target=receive_prediction, daemon=True).start()
        update_plot(chunk_ecg, chunk_ppg)

    print("Data transmission complete.")  # Debug


def receive_prediction():
    global predicted_class, stop_receiving
    print("Waiting for prediction from ESP32...")  # Debug
    while not stop_receiving:
        line = ser.readline().decode('utf-8', errors='ignore').strip()
        print(f"Received line: {line}")  # Debug
        if line.startswith("Predicted Class:"):
            try:
                predicted_class = int(float(line.split(":")[1].strip()))
                print(f"Predicted class: {predicted_class}")  # Debug
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
    text = f"Device Returned: {conditions.get(predicted_class, 'Unknown Condition')}"
    
    # Set background color based on prediction class
    if predicted_class == 2:  # Healthy
        bg_color = '#b6f0ba'
    elif predicted_class == 0 or predicted_class == 3 or predicted_class == 1:  # Atrial Fibrillation, Tachycardia, Bradycardia
        bg_color = '#ffe596'
    else:  # Other conditions
        bg_color = '#ff5757'
    
    print(f"Updating result label with: {text}, background color: {bg_color}")  # Debug
    root.after(0, lambda: result_txt.config(text=text, bg=bg_color))  # Update the label's text and background color


# Function to Embed ECG Plot in GUI
def update_plot(ecg_chunk, ppg_chunk):
    print("Updating plot with new data...")  # Debug
    ax1.plot(ecg_chunk, color='#de528f', label="ECG Signal")
    ax1.set_xlabel("Time")
    ax1.set_ylabel("Amplitude")
    ax1.set_title("ECG Signal")  # Label for the top plot
    ax1.legend()
    ax1.grid()

    ax2.plot(ppg_chunk, color='#de528f', label="PPG Signal")
    ax2.set_xlabel("Time")
    ax2.set_ylabel("Amplitude")
    ax2.set_title("PPG Signal")  # Label for the bottom plot
    ax2.legend()
    ax2.grid()

    canvas.draw()  # Update the plot without clearing everything


def update_result_label(predicted_class):
    conditions = {
        0: "Atrial Fibrillation",
        1: "Bradycardia",
        2: "Healthy!",
        3: "Tachycardia",
        4: "Ventricular Flutter Fibrillation",
        5: "Ventricular Tachycardia"
    }
    text = f"Device Returned: {conditions.get(predicted_class, 'Unknown Condition')}"
    
    # Set background color based on prediction class
    if predicted_class == 2:  # Healthy
        bg_color = '#b6f0ba'
    elif predicted_class == 0 or predicted_class == 3 or predicted_class == 1:  # Atrial Fibrillation, Tachycardia, Bradycardia
        bg_color = '#ffe596'
    else:  # Other conditions
        bg_color = '#ff5757'
    
    print(f"Updating result label with: {text}, background color: {bg_color}")  # Debug
    root.after(0, lambda: result_txt.config(text=text, bg=bg_color))  # Update the label's text and background color


# Function to Embed ECG Plot in GUI
def update_plot(ecg_chunk, ppg_chunk):
    print("Updating plot with new data...")  # Debug
    ax1.clear()
    ax1.plot(ecg_chunk, color='#de528f', label="ECG Signal")
    ax1.set_xlabel("Time")
    ax1.set_ylabel("Amplitude")
    ax1.set_title("ECG Signal")  # Label for the top plot
    ax1.legend()
    ax1.grid()

    ax2.clear()
    ax2.plot(ppg_chunk, color='#de528f', label="PPG Signal")
    ax2.set_xlabel("Time")
    ax2.set_ylabel("Amplitude")
    ax2.set_title("PPG Signal")  # Label for the bottom plot
    ax2.legend()
    ax2.grid()

    canvas.draw()  # Update the plot

root = Tk()
root.title('RhythmGuard')
root.configure(background='#de528f')

fig, (ax1, ax2) = plt.subplots(2, 1)
fig.suptitle('Sending Data...')
plt.subplots_adjust(hspace=0.5)

# Set up grid weigh# GUI Setupts for responsive layout
root.grid_rowconfigure(0, weight=1)
root.grid_rowconfigure(1, weight=3)  # Increase the weight of the second row (where the graph is displayed)

root.grid_columnconfigure(0, weight=1)
root.grid_columnconfigure(1, weight=4)  # Adjust weight for the central column (buttons and labels)
root.grid_columnconfigure(2, weight=6)  # Right column with the graph gets most of the space

# Left Panel - Buttons and Labels
left_frame = Frame(root, bg="#de528f")
left_frame.grid(row=0, column=0, padx=10, pady=10, sticky="nsew")

# Center Panel - Centered Buttons
center_frame = Frame(root, bg="#de528f")
center_frame.grid(row=0, column=1, padx=10, pady=10, sticky="nsew")

Label(center_frame, text='Simulate Patient Data:', bg='#de528f', fg='white', font=('Helvetica', 14, 'bold')).grid(row=0, column=0, pady=20, sticky="ew")

buttons = ["Healthy", "Bradycardia", "Tachycardia", "Atrial Fibrillation", "Ventricular Fibrillation", "Ventricular Tachycardia"]
data_types = ["healthy", "bradycardia", "tachycardia", "afib", "v_fib", "v_tachy"]

# Create a grid structure where buttons are centered between left margin and the graph
for i, (text, dtype) in enumerate(zip(buttons, data_types)):
    button = Button(center_frame, text=text, height=50, bg='#e38fb3', fg='white', borderwidth=0, relief='flat', font=('Helvetica', 14, 'bold'))
    button.grid(row=i + 1, column=0, pady=10, padx=10, sticky="ew")
    button.config(command=lambda dt=dtype, b=button: select_data(dt, b))


# Centering Labels
Label(center_frame, text="Select Port:", bg='#de528f', fg='white', font=('Helvetica', 12, 'bold')).grid(row=len(buttons) + 1, column=0, pady=10, sticky="ew")
port_combo = Combobox(center_frame)
port_combo.grid(row=len(buttons) + 2, column=0, pady=10, padx=10, sticky="ew")

select_port = Button(center_frame, text='Connect', height=50, command=choose_port, bg='#e38fb3', fg='white', font=('Helvetica', 14, 'bold'), borderwidth=0, relief='flat')
select_port.grid(row=len(buttons) + 3, column=0, pady=10, sticky="ew")
stop_btn = Button(center_frame, text='stop', height=50, command=stop, bg='#e38fb3', fg='white', font=('Helvetica', 14, 'bold'), borderwidth=0, relief='flat')
stop_btn.grid(row=len(buttons) + 4, column=0, pady=10, sticky="ew")
connect = Label(center_frame, text='', font=('Helvetica', 10), bg='#de528f', fg='white', borderwidth=0, relief='flat')
connect.grid(row=len(buttons) + 5, column=0, pady=10, sticky="ew")
result_txt = Label(center_frame, text='', font=('Helvetica', 12))
result_txt.grid(row=len(buttons) + 6, column=0, pady=10, sticky="ew")

# Right Panel - Graphs
right_frame = Frame(root, bg="#de528f")
right_frame.grid(row=0, column=2, padx=10, pady=10, sticky="nsew")

canvas = FigureCanvasTkAgg(fig, master=right_frame)
canvas.get_tk_widget().pack(fill=BOTH, expand=True)

# Scan for available ports immediately on start
scan_ports()

root.mainloop()

