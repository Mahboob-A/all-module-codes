# Week 02 : Module 05:  List Set Dict And Touples
# 101022, Monday, 07.30 pm
# 5-2 Introduction to set and tuple in python

print()

# """  
# Touple in py is immutable data structure i.e we can not modify touple unless the values in the touple are mutable i.e changable.
# A touple with no mutable value is not changeable but a touple with mutable value, is changeable.
# 
# We can decalre a touple with parenthesis or we just can add numbers sepereated with coma 
# 
# """

a_list = [10, 40, 30, 20, 10, 50]

a_touple = 20, 58, 21, 45, 67, 23 

another_touple = (34, 23, 46, 65, 23, 78, 34)

short_touple = 5, 

print(a_touple)
print(another_touple)
print(short_touple)

# we also can access touple by [0] indexing 
print(a_touple[3])

# we can not delete immutable values from touple 
# a_touple[3] = 40 

# here we have put a list for each index of touple and as list in mutable, we can change the elements of the list but we can not change the 
# the the list as a whole to something else 
touple2D = ([10, 40, 50], [49, 30, 29], [59, 20, 12])

# printing the [0] index of the touple i.e the list present in the [0] index 
print(touple2D[0])

# we just can not change the value of touple like this 
# touple2D[1] = 80 

# but we can change the value of the index as the indexs are a list and list is mutable 
# here we are changing the touple's [1] index's list's [2] index's value to 100; just like the 2D array we are used to in cpp 
touple2D[1][2] = 100 
print(touple2D)

print()





