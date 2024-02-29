"""  
Py week 09: Recap week 
mod date: 281122, Monday
mod: 32 - Recap built-in data types, slicing, lambda function, zip 
32-3: Lambda in python 
291122, Tuesday, 03.00 pm  
"""
# lambda takes only one expression 
# lambda in python is annoymus function, i.e it works same like a function but the function does not have any name 

# normal function 
def say():
        print("Good moring")

say()

# in lambda  
a = lambda : print("Good morning")
a()

"""  
lambda structure: 

variable = lambda parameter/argument : expression 
"""
# kono lambda function e jodi kono user existing value na pass kora hoy tobe sei ta akta func hisebe use kora jabe
# and user value er opor lambda korle oi value er opor ei result asbe 


# Example 01: 
# uppercase a sting and reverse it using lambda function 
a = 'Phitron'

make_upper_rev = lambda string : string.upper()[::-1]
# make_upper_rev is now a lambda function that takes an argument and makes it upper and reversed 

print(make_upper_rev(a))


# Example 02: 
# find max of two value using lambda function 
find_max = lambda a, b : a if (a > b) else b 
# find_max if now a function that takes two argument and returns the max element of the two 

print(find_max(10, 20))
print(find_max(50, find_max(20, find_max(5, 15))))
print(find_max(find_max(10, 12), find_max(45, 20)))


print()
# Example 03: 
# using list compression, make elements of a list double using a lambda function 
lst = [1, 2, 3, 4, 5]
make_double = [lambda arg = val : arg * 2 for val in lst]   # val is value of lst | arg is parameter of lambda func 


for val_func in make_double: 
        # print(val_func())
        ...

# same using map 
double = list(map(lambda x: x * 2, lst))
# print("Double using map: ", double)
print()
# same func in normal func 
# def add(x):
#         return x * 2 

# for i in lst: 
#         print(add(i))

# Example 04: 
# filter, map, reduce 

# filtering the even nums in a list using filter and lambda 
lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
odd_list = list(filter(lambda x : (x%2!=0), lst))
# print(odd_list)

# Example 05: 
# map : map can iterate all the values of an iterable. map works same like a for loop   
# make a string of list upper using map and lambda

str_lst = ['Hello', 'World', 'Good', 'Morning']
new_str_lst = list(map(lambda x : x.upper(), str_lst))   # map iterates all the values of the given list just like a for loop 
new_str_lst2 = [lambda arg=x : arg.upper() for x in str_lst]  # using for loop and only lambda 

print(new_str_lst)

for i in new_str_lst2:
        print(i())



# Example 06: 
# using reduce func find sum of a list 
from functools import reduce 

lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
sum = reduce(lambda x, y : x + y, lst)   # reduce takes two elements form an iterable and returns the one and continues the process unitll the end of the iterable, works like += here 

print(sum)



