"""  
Py week 08: ML 
Module 29: Numpy and Logistics Regression 
Mod date: 201122, Sunday
Watch date: 241122, Thursday, 03.30 pm 
29-1 Simple Numpy array zeros ones arange linspace
"""

import numpy as np 

a_list = [1, 2, 3, 45, 6]

np_array = np.array([1, 2, 3, 4, 5])
print('Numpy array: ', np_array)

ten_zeroes = np.zeros(10)
print('10 Zeroes: ', ten_zeroes)

ten_ones = np.ones(10)
print("10 ones: ", ten_ones)

# sequential array | arange takes start, stop and steps 
sequence_num = np.arange(15)
print("Sequence numbers: ", sequence_num)

# this way of parameter will provide num from 0 to 41 skipping 5 nums each 
stepper_num = np.arange(0, 41, 5)
print("Stepper num: ", stepper_num)

# linearspace | linspace(this takes start, end, and how much num needed between this range)
# kono akta range er moddhe koto ta numbers pete chaichi, linspace seta output dei 
spaced_num = np.linspace(0, 10, num=100)
print("Linear space: ", spaced_num)


# set datatype of values 
# we can also set the data type of our values in numpy, 
sequence_datatype_num = np.arange(0, 25, dtype=int)
print(type(sequence_datatype_num[0]))

# dtype = int -> this will take default int32 bit int. if we want to make another type int, then
sequence_datatype_num_2 = np.arange(0, 25, dtype=np.int64)
print(type(sequence_datatype_num_2[0]))
