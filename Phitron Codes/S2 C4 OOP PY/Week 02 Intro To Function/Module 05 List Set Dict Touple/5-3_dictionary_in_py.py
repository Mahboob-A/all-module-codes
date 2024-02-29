# Week 02 : Module 05:  List Set Dict And Touples
# 101022, Monday, 09.30 pm
# 5-3 Explore Dictionary and Dictionary Methods

from traceback import print_tb


print()

# """  
# A dictionary is key-value pair data structure of python. 
# We can create a dict using curly braces and and key : value seperated by coma 
# 
# """

# creating a dictionary 
marks = {"math" : 50, "physics" : 70, "chemistry" : 88}

print("Dict before any ops: ", marks)

# changing the value of dict item 
marks["math"] = 99 
print("Dict after changing the value of an item math: ", marks)


# adding a new item in the list 
marks['english'] = 100 
print("Dict after adding english itme: ", marks)

# deleting an item from the dictionary 
del marks['chemistry']
print("Dict after deleting chemistry item: ", marks)

print()

# accessing only the keys of the dict 
dict_keys = marks.keys()
print("Printing only the keys of the dict: ", dict_keys)

# accessing only the values of the dict    
dict_values = marks.values()
print("Printing only the values of the dict: ", dict_values)

# accessing the whole dict 
dict_items = marks.items()
print("Printing the whole dict items:  ", dict_items)

# clearing the whole dict 
marks.clear()
print("Printing the dict after clearing it: ", marks)


print()