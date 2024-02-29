"""  
Module 09.5 Practice Day 01 
Mod date: 171022, Practice Date: 181022, Tuesday, 9.30 pm 

"""

# we can sort all mixed elements from a data type using isinstance() function like velow 

sample_list = ['Emma', 'Stevan', 12, 45.6, 1 + 2j, "Eric", ]
number_list = []
string_list = []
for item in sample_list:
    if isinstance(item, (int, float, complex)):
        number_list.append(item)
    elif isinstance(item, str):
        string_list.append(item)

# String List
print(string_list)
# Output ['Emma', 'Stevan', 'Eric']

# Number list
print(number_list)
# Output [12, 45.6, (1+2j)]
