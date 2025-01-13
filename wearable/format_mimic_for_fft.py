#This file extracts the first 1024 data points from the healthy mimic dataset.
#It formats the data for ftt.cpp and writes the formatted data to formatted_ecg.txt
#The data in formatted_ecg.txt can be copied and pasted into the array a in the main function of fft.cpp
#The fft results are written to fft_results.txt in csv format

import csv
from collections import defaultdict

columns = defaultdict(list) # each value in each column is appended to a list

input_csv = "C:/Users/kavya/OneDrive/Documents/GitHub/RhythmGuard/ESP_Code_POC/mimic_perform_non_af_009_data.csv"
with open(input_csv, mode='r') as file: 
  # Create a CSV reader object 
  csv_reader = csv.reader(file)

  # Skip the header row (if there is one) 
  next(csv_reader, None) 

  # Iterate over each row in the CSV file 
  n = 0
  for row in csv_reader: 
    for (i,v) in enumerate(row):
        columns[i].append(v)
    n += 1
    if n == 1024:
      break

#print(columns[2])
#print(columns[2][0])

with open("formatted_ecg.txt", "w") as file:
    for i in range(0,1024):
        file.write("cx( %s, 0)," % columns[2][i])