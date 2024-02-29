"""  
Py week 09: Recap week 
mod date: 281122, Monday
mod: 32 - Recap built-in data types, slicing, lambda function, zip 
32-5: list and dict comprehension in python   
291122, Tuesday, 09.00 pm 
"""

# A. List Comprehension 
# [expression for item in data]

lst = ['new', 'demo', 'python', 'module']
new_lst = [st.upper() for st in lst]
# print(new_lst)

# this lambda is only for single value 
x = 'ok'
make_upper = lambda a : a.upper()
z = make_upper(x)
# print(z)

# now the what map does is that is implies the lambda func to all the values of an iterable 
new_lst2 = map(lambda x: x.upper(), lst)  # using map and lambda the same thing as the list comprehension 
# print(list(new_lst2))


# Example 02: 
# get some ranged value 
x = [i for i in range(1, 10)]  # both way are same 
y = tuple(range(1, 10))   # we can take any data type 
# print(x)
# print(y)
# print(id(x))
# print(id(y))

# Example 03: 
# make all the elements of a string into elements of a list 
x = 'hello'
# print(list(x))
# with list comprehension:
y = [char for char in x]
# print(y)
# print(id(x))
# print(id(y))

# Example 04: 
# find even or odd in a range or in a list 
lst = [x for x in range(1, 20) if x%2 == 0]
print(lst)

# Example 05: 
# divisible by 3 and 5 both 
lst = [x for x in range(100) if x%3 == 0 if x%5 == 0]
print(lst)

# Example 06: 
# odd even 
lst = [f'Even {x}' if x%2==0 else f'odd {x}' for x in range(10)]
print(lst)

# Example 07 
# Make pair for unmatched elements 
lst = [(x, y) for x in [1,3, 4, 5] for y in [2, 5,1, 3, 8] if x != y]
print(lst)
