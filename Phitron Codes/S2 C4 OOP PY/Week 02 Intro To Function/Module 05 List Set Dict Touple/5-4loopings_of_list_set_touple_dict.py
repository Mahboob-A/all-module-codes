# Week 02 : Module 05:  List Set Dict And Touples
# 111022, Tuesday, 07.00 am 
# 5-4 How to Loop through list, set, tuple and dictionary

# looping in touple, set and list are same. 

from cgi import print_directory
from traceback import print_tb


print()


# touple 
a_tp = 10, 49, 34, 45, 23, 56

# looping in touple 
# for num in a_tp : 
        # print(num)

# list 
a_list = [30, 54, 23, 45, 64, 57]

# looping in list 
# for num in a_list :
#         print(num)

# set 
a_set = {10, 56, 23, 46, 67}

# looping in set 
# for num in a_set: 
        # print(num)

# dict 
a_dict = {"math": 99, "phy": 88, "chem": 80}

a_dict["math"] = 100 
a_dict["english"] = 99 

# looping in dict 
for key, val in a_dict.items() :
        print(key, val)

print("Getting the value through the key: ")

# another method -> getting the value through the key 
for key in a_dict : 
        val = a_dict[key]
        print(key, val)




print()