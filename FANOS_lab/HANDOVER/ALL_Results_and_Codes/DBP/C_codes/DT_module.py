"""
Define the C-variables and functions from the C-files that are needed in Python
"""
from ctypes import c_double, c_int, CDLL

lib_path = 'DT.so' 
try:
    basic_fn_lib = CDLL(lib_path)
except:
    print('OS win64 not recognized') 

DT_python = basic_fn_lib.DT
DT_python.restype = None

def DT_c(list_in):
    """Call C function to calculate squares"""
    n = len(list_in)
    c_arr_in = (c_double * n)(*list_in)
    c_arr_out = (c_double * n)()

    DT_python(c_int(n), c_arr_in, c_arr_out)
    return c_arr_out[:]