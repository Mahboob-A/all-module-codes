"""  
Py week 09: Recap week 
mod date: 281122, Monday
mod: 32 - Recap built-in data types, slicing, lambda function, zip 
32-5: list and dict comprehension in python   
301122, Wednesday, 09.00 am 
"""

# Example 01:
dct = {i : i+10 for i in range(10)}
# print(dct)

# Example 02: 
# find the even value pair and make new pair 
dct = {"jack" : 30, "karim" : 20, "rahim" : 21}
new_dct = {k:v for k, v in dct.items() if v%2==0}
# print(new_dct)

# Example 03: 
# dict comprehension with dual condition 
dct = {"jack": 30, "karim": 20, "rahim": 21}
new_dct = {k:v for k, v in dct.items() if v%2!=0 if v > 20}
# print(new_dct)

# Example 04: 
# make old if age >= 50 else young as value of key 
dct = {"jack": 50, "karim": 20, "rahim": 21}
new_dct = {k: ('old' if v >= 50 else 'young') for k, v in dct.items()}
# print(new_dct)

# Example 05: 
# usage of nested for loop in dict comprehension 
dct = {k1 : {k2 : k1 * k2 for k2 in range(2)} for k1 in range(5)}
dct2 = {k1 : {k2 : k1 * k2} for k2 in range(2) for k1 in range(5)}
print(dct)
print(dct2)

# { 0 : {0 : 0}, 1 : {1: 1}, 2 : {2; 4} }


