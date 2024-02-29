"""  
Py week 09: Recap week 
mod date: 281122, Monday
mod: 32 - Recap built-in data types, slicing, lambda function, zip 
32-7: zip method in python 
301122, Wednesday, 04.30 pm 
"""
# Example 01: 
# Zip method 
"""  
Zip method takes iterable and returns tuple with one element from each iterable, we just need to convert it to any data type 
Zip method can take mixture of different data type 
Zip method stops at the shortest iterable 

var = zip(irteable1, itarable2 etc)

If no iterable is passed in zip, then it returs an empty iterable 

UNZIP: 
We can also unzip a zipped iterable using the * operator
x, y = zip(* zippedIterable)
"""

# Example 01: 
# zip method 

num = [1, 2, 3, 4]  # as this one is the shortest, hence, the zipping process would terminate once this gets exhausted
nums = (1.1, 2.2, 3.3, 4.4)
name = ['java', 'python', 'c++', 'c']  
fruit_dict = {'banana': 10, 'mango': 20, 'litchi': 30, 'pineapple': 40}
# zip() method returns an iterable of tuple that can be converted into tuple, set, list
zipped_iter = zip(num, nums, name, fruit_dict)   # by default it will take the keys 
zipvar = tuple(zipped_iter)  # fi needed to unzip, we need to convert the returned iterable to readable format before unzipping 
# print(zipvar)


# unzip a zipped iterable 
ints, floats, names, fruit_price = zip(*zipvar)
# print(f"Unzipped Elements: \nint: {ints}\nfloat: {floats}\nname: {names}\nfruits: {fruit_price}\n")



# coordinate = ['x', 'y', 'z']
# value = [3, 4, 5]

# result = zip(coordinate, value)
# result_list = list(result)
# print(result_list)

# c, v = zip(*result_list)
# print('c =', c)
# print('v =', v)


# Example 02: 
# if we have two different data and we want to make a dictionary out of them, then zip method works here too 
names = ["rahim", "karim", "kemal"]
salaries = [10500, 15500, 20500]

# making a dict from two diff data uisng zip
new_dct = {name : salary for name, salary in zip(names, salaries)}
print(new_dct)