"""  
Py week 09: Recap week 
mod date: 281122, Monday
mod: 32 - Recap built-in data types, slicing, lambda function, zip 
32-6: 2d list comprehension 
301122, Wednesday, 03.30 pm 
"""

# Example 01: 
# Basic 2d list | both are same 
lst = [["*"]*3 for _ in range(5) ]
lst[0][1] = 1 
# print(lst)

lst = [[0 for j in range(3)] for i in range(5)]
lst[0][0] = 1 
# print(lst)

# Example 02: | Bad way of creating matrix | same memory location 
r, c = (5, 5)
lst = [[0]*c]*r
lst[0][1] = 1 # this will make all the 1th pos's value to 1 
# this is happening because as we know python creates varialbe depending upon the value, 
# here all the colums of same different rows are referenced to one single memory address. So, when we try to 
# change one indexes, it changes all the indexes of the rows 
# this is why we should not create matirx in this way  
# rather we should create matrix described on the above 
lst[2][3] = 10 
# print(lst)


# Example 03: 
# Flatten a matrix i.e make the matrix into a 1d list
lst = [[1, 2, 3], [4, 5], [6, 7, 8]]
new_lst = [val for sublist in lst for val in sublist]
# print(new_lst)

# Example 04: 
# Flatten with if condition 
lst = [['mango', 'banana'], ['java', 'python'], ['litchi', 'pineapple'], ['hello', 'world']]
new_lst = [string for sublist in lst for string in sublist if len(string) >= 6]
print(new_lst)

