"""
Created on Fri Oct 25 16:38:25 2019
@author: khaled

When you call fetch_housing_data(), it creates a datasets/housing directory in
your workspace, downloads the housing.tgz file, and extracts the housing.csv from it in
this directory. 
The other part is to load the data afterwords
"""
import numpy as np
import os # to manage files and directories
import tarfile # for extracting compressed files
from six.moves import urllib # to access URLs
import pandas as pd # to load the csv file as a Pandas DataFrame object
# Setting the download path and the file path
DOWNLOAD_ROOT = "https://raw.githubusercontent.com/ageron/handson-ml/master/"
HOUSING_PATH = "datasets/housing"
HOUSING_URL = DOWNLOAD_ROOT + HOUSING_PATH + "/housing.tgz"
#%%
# Now download and extract the file
def fetch_housing_data(housing_url=HOUSING_URL, housing_path=HOUSING_PATH):
    if not os.path.isdir(housing_path): # if the folder is not there, create it
        os.makedirs(housing_path)
    tgz_path = os.path.join(housing_path, "housing.tgz") # add file name to dir
    urllib.request.urlretrieve(housing_url, tgz_path) # get the file
    housing_tgz = tarfile.open(tgz_path) # open compressed file
    housing_tgz.extractall(path=housing_path) # extract it to the following path
    housing_tgz.close() # done and colse the compressed file
#%%
# This is another function to load the data using pandas
# This function returns a Pandas DataFrame object containing all the data.
def load_housing_data(housing_path=HOUSING_PATH):
    csv_path = os.path.join(housing_path, "housing.csv")
    return pd.read_csv(csv_path)
#%%
# Split the data to create a test set
def split_train_test(data, test_ratio):
    shuffled_indices = np.random.permutation(len(data))
    test_set_size = int(len(data) * test_ratio)
    test_indices = shuffled_indices[:test_set_size]
    train_indices = shuffled_indices[test_set_size:]
    return data.iloc[train_indices], data.iloc[test_indices]

#%%
    # Writing it as a transformer customized class:
from sklearn.base import BaseEstimator, TransformerMixin
from sklearn.preprocessing import LabelEncoder
encoder = LabelEncoder()
class RemoveGarbageEncodeObjects(BaseEstimator, TransformerMixin):
    def __init__(self, objective, train_data = None): # no *args or **kargs
            self.objective = objective
            self.train_data = train_data if train_data is not None else dict()
    def fit(self, train_copy, y=None):
        return self # nothing else to do
    def transform(self, train_copy, y=None): # combining features as desired
        train_copy2 = train_copy.copy()
        for name_att in train_copy.keys():
    # comparing the number of occurances (non-null) with half of the whole length
            if (self.objective == 'train'):
                if (sum(train_copy2[name_att].value_counts().tolist()) < max(train_copy.shape)/2): 
                    train_copy2.drop([name_att], axis=1, inplace=True)
                else:
                    if train_copy2[name_att].dtype=='O': # if data type is object (i.e. str or mixed)
                        train_copy2[name_att]=encoder.fit_transform(train_copy2[name_att].astype(str)) # encode
            elif (self.objective == 'test'):
                if (sum(self.train_data[name_att].value_counts().tolist()) < max(self.train_data.shape)/2): 
                    train_copy2.drop([name_att], axis=1, inplace=True)
                else:
                    if train_copy2[name_att].dtype=='O': # if data type is object (i.e. str or mixed)
                        train_copy2[name_att]=encoder.fit_transform(train_copy2[name_att].astype(str)) # encode
        return train_copy2

#%%
        
# to print the scores (evaluation) later:
def display_scores(scores): 
    print("Scores:", scores)
    print("Mean:", scores.mean())
    print("Standard deviation:", scores.std())


