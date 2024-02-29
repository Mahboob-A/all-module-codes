"""  
Py week 08: ML 
Module 29: Numpy and Logistics Regression 
Mod date: 201122, Sunday
Watch date: 241122, Thursday, 03.30 pm 
29-2 Matrix operation using numpy
"""

import numpy as np 
# we can create n dimension array with numpy 

one_d = np.array([1, 2,5, 9, 7, 4, 10, 81, 19])
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
print("One dimension to two dimension: \n", one_d_to_two_d)

# reverse array | we can reverse array of any dimension 
reversed_two_d = np.flip(one_d_to_two_d)
print("Reversed two dimension: \n", reversed_two_d)


# we can also add, substract, divide or multiply two any dimension array 
sum_of_two_array = one_d_to_two_d + reversed_two_d
print("Sum of two two dimension array:  \n", sum_of_two_array)

# we can make one dimension to higher dimension with | reshape | and 
# we can make higher dimension to single dimension with faltten()
single_d = sum_of_two_array.flatten()
print("Making sum of two array 2d array to one dimension:  ", single_d)

# making three dimension array to one dimension 
sum_of_array = three_d.sum()  # we can choose many operations here just like sum 
print(sum_of_array)