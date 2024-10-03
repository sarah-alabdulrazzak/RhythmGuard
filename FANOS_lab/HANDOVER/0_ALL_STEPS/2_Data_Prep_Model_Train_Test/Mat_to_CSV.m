
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% This code transforms the reduced MIMIC dataset from 4 Matlab variables
% to CSV files, each containing 1000 instance

% Loading data

Data1 = load("C:\1_Work\FANOS_lab\Reduced_Processed_Dataset_UCI_Kauchee\Part_1.mat");
Data2 = load("C:\1_Work\FANOS_lab\Reduced_Processed_Dataset_UCI_Kauchee\Part_2.mat");
Data3 = load("C:\1_Work\FANOS_lab\Reduced_Processed_Dataset_UCI_Kauchee\Part_3.mat");
Data4 = load("C:\1_Work\FANOS_lab\Reduced_Processed_Dataset_UCI_Kauchee\Part_4.mat");
All_data = [Data1.Part_1, Data2.Part_2, Data3.Part_3, Data4.Part_4];
size(All_data)
clear Data1 Data2 Data3 Data4 % not needed anymore 

%% Creating Instance Indices
num_of_instances = length(All_data);
% This part saves the indices of all signals. It is important to store it so that we can identify different signals  
% and access the data in a signal-by-signal order.
N_i = zeros(num_of_instances,1); % a vector of instances lengthes (# samples)
for i = 1:num_of_instances
    N_i(i) = length(All_data{1,i}(1,:)); % Num of samples of i_th instant
end
csvwrite('DataIndices.csv', N_i)
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

End_indices = cumsum(N_i);
Start_indices = [0; End_indices] + 1; % In python don't add 1 :) 
Total_length = End_indices(end); % the latest item in the end indices is the total length of data samples
clear N_i % not needed anymore 

%% Creating the complete file & dividing it into 12 smaller files
All_signals = zeros(Total_length,3); % A vector to hold 3 signals (PPG, ABP, ECG) concatenated vertically over all instances
for i = 1:num_of_instances
    
    All_signals(Start_indices(i):End_indices(i),:) = All_data{1,i}';

end


% saving eevery 1000 instances in a csv file
for k = 1:12
    file_name = strcat(string(k),'.csv');
    csvwrite(file_name, All_signals(Start_indices(1000*(k-1) + 1):End_indices(1000*k),:))
end


%%
% saving all signals in a single CSV file
csvwrite('All_Signals.csv', All_signals)



