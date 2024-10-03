
import numpy as np
from sklearn.base import BaseEstimator, TransformerMixin
from sklearn.preprocessing import LabelEncoder
import pandas as pd # to load the csv file as a Pandas DataFrame object

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

