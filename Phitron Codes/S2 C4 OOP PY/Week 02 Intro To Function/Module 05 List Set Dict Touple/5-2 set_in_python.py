# Week 02 : Module 05:  List Set Dict And Touples
# 101022, Monday, 07.00 pm
# 5-2 Introduction to set and tuple in python

from operator import ne


print()

# """
# Set is a data structure in python that is declared with curly braces.
# The most important feature of set is that there is no duplicate value allowed in set dt.
#
# """

# a list
num_list = [10, 20, 10, 40, 39, 40, 39, 20, 10]

# a set
# although dupes are inserted in the set, but all the dupes will be removed from the set
num_set = {10, 20, 10, 40, 39, 40, 39, 20, 10}

# print(num_list)
# print(num_set)

# making the list as a set
new_set = set(num_list)

print("new_set: ", new_set)

# as 100 is not present in the set, 100 will be inserted
new_set.add(100)
print("new_set: after 100 add ", new_set)


# as 10 already included, 10 will not be inserted in the set
new_set.add(10)
print("new_set: after 10 add ", new_set)


# 10 will be removed
new_set.remove(10)
print("new_set: after removing 10: ", new_set)

print("new_set current size:", len(new_set))
