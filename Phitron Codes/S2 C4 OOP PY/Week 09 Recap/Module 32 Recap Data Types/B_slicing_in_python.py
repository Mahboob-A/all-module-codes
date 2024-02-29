"""  
Py week 09: Recap week 
mod date: 281122, Monday
mod: 32 - Recap built-in data types, slicing, lambda function, zip 
32-2: slicing in python 
291122, Tuesday, 12.30 am 
"""

# we can slice in sequential data types | string, tuple and list 

from lib2to3.pgen2.token import NEWLINE


lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# assess any index value 
print(lst[5])

# slice start : end index 
print(lst[0:5])   # start : end | the elements will be from start to end-1 values 

# slice using step 
print(lst[0:10:2])   # start : end : step 

# slice using negative indexing 
print(lst[-5: -1])    # from -5 to -1 ( but this form is invalid = print(lst[-1: -5])) because -1 is the last index, it cannot move below -1 

# slicing and assigning values
lst[0:3] = [0, 0, 0]
print(lst)

# reverse suing negative stepping 
print(lst[::-1])   # reverse :: -1 

# tuple
tp = (1, 2, 3, 4, 5)
print(tp[1:3])
print(tp[0:4:2])


# str 
s = 'I love pyhton'
print(s[::-1])   # reverse 
print(s[0:5])
print(s[-10:-1])



# using slice function 
# slice(start, end, step) | slice returns the coresponding data type that is passed to it 
a_lst = [1, 2, 3, 4, 5]
new_lst = slice(0, 3)
print(new_lst)   # we need to pass it to the original list 
print(a_lst[new_lst])
