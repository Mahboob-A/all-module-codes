"""  
Py week 08: ML 
Module 29: Numpy and Logistics Regression 
Mod date: 201122, Sunday
Watch date: 241122, Thursday, 06.30 pm 
29-3 Array dimension size shape sort copy
"""

import numpy as np
# we can create n dimension array with numpy

one_d = np.array([1, 2, 5, 9, 7, 4, 10, 81, 19])
print("One dimension array: \n", one_d)

two_d = np.array([[2, 3, 4], [5, 6, 7], [5, 4, 3]])
print("Two dimension array:  \n", two_d)

# three dimension array takes two dimension array
three_d = np.array([
    [[2, 3, 4], [5, 6, 7], [5, 4, 3]],
    [[2, 3, 4], [5, 6, 7], [5, 4, 3]],
    [[2, 3, 4], [5, 6, 7], [5, 4, 3]]
])

# print("Three dimension: ", three_d)

# change  one dimension array to two dimension
# np.reshape takes two parameter: 1st is row and 2nd is column
one_d_to_two_d = one_d.reshape(3, 3)
# print("One dimension to two dimension: \n", one_d_to_two_d)

# reverse array | we can reverse array of any dimension
reversed_two_d = np.flip(one_d_to_two_d)
# print("Reversed two dimension: \n", reversed_two_d)


# we can also add, substract, divide or multiply two any dimension array
sum_of_two_array = one_d_to_two_d + reversed_two_d
# print("Sum of two two dimension array:  \n", sum_of_two_array)

# we can make one dimension to higher dimension with | reshape | and
# we can make higher dimension to single dimension with faltten()
single_d = sum_of_two_array.flatten()
# print("Making sum of two array 2d array to one dimension:  ", single_d)

# making three dimension array to one dimension
sum_of_array = three_d.sum()  # we can choose many operations here just like sum
# print(sum_of_array)


###################################
# head on to numpy.org for documentation 
# some operations in numpy    
# 1. Get the size of array i.e how many elements are there in the array  | using size 
size_of_two_d_array = two_d.size    # only size, not size()
print("size of array i.e how many elements are in an array :  ", size_of_two_d_array)

print()
# 2. Get info about the array is in which dimension | using ndim 
dimension_of_array = three_d.ndim # only ndim, not ndim() 
print("dimension of the array:  ", dimension_of_array)

print()
# 3. Get info about the shape or row col info of an array | using shape 
shape_of_three_d_array = three_d.shape 
print("Shape of three dimension array:   ", shape_of_three_d_array)   #(3, 3, 3) 1st 3 is row, 2nd 3 is col, and 3rd 3 is no of elements in each col 

print()
# 4. Get info about the data type of an array | using dtype 
datatype_of_two_d_array = two_d.dtype
print("Data type of two dimension array:  ", datatype_of_two_d_array)

print()
# 5. Change data type of an array | using astype
# astype takes the datatype keyword, like i for int, f for float etc 
print("Data type of two_d array:  ", two_d.dtype)
int_to_float_two_d = two_d.astype('f')
print("Data type of two_d after chaning to flaot:  ", int_to_float_two_d.dtype)


print()
# 6. Copy array | using np.copy 
# we can copy array 
copy_array = np.copy(two_d)
print("Copied two_d array:  \n", copy_array)

print()
# 7. sort array | using np.sort
# we can sorry any dimension of array 
sorted_three_d = np.sort(three_d)
print("three_d array sorted:  \n", sorted_three_d)
print()
linear_two_d = two_d.flatten()
sorted_two_d = np.sort(linear_two_d)
print("Sorted two_d array:  \n", sorted_two_d)
