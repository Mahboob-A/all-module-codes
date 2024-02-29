# Week 02 : Module 05:  List Set Dict And Touples
# 101022, Monday, 05.30 pm 
# 5-1 Introduction to list, list methods and slice 

from traceback import print_tb


print()

# list in python is heteregenous i.e it can have multiple data type values 
# and list in py has negative indexing too i.e from right to left starting from -1 

# declaring a list
num = [10, 20, 30, 40, 50, 60, 70, 80, 90]

# assessing list element by 0 indexing 
print(num[2])

# assessing list by negative indexing 
print(num[-7])

print("All About Slice: ")
print()

# making a slice from [2] index and before [5] index 
print(num[2 : 5])

# making a slice by 2 steps 
print(num[2 : 7 : 2])

# making a slice from a particular index to all remaining right index 
print(num[0 : ])

# making a slice from a particular index to all remaining right index by negative indexing it will print from left to right 
# right just like [0] indexing 
print(num[-9: ])

# this will also print from left to right by negative indexing 
print(num[-6 : - 2 ])

# making a slice as reverse order. From index 5 to index 2 decreasing by -1. 
# Here, we need to give the steps, otherwose, the reverse order print / access would not be happened 
print(num[5 : 2 : -1])

# making a slice of reverse order. we need to give the steps here too, otherwise, the assess would not happen 
print(num[-2 : -6 : -1])

# making a slice of full list using slice from left to right 
print(num[ : ])

# making a slice of reverse list. it is also of a full list reversed. 
print(num[ : : -1])



print(num[ :  : -1])

print(num)

print()