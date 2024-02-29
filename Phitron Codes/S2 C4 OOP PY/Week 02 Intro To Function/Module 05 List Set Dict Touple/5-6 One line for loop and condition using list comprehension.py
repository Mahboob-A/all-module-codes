# Week 02 : Module 05:  List Set Dict And Touples
# 111022, Tuesday, 09.30 am
# 5-6 One line for loop and condition using list comprehension

# """  
# Comprehension means shorting the for loop. 
# We can write for loop in one line using comprehension 
# 
# """

a_list = [23, 56, 25, 56, 31, 12, 45, 67, 34, 48, 46, 97]

# an empty list 
odd_num = []

# getting the odd num using for loop in traditional manner 
for num in a_list : 
        if num % 2 == 1 :
                odd_num.append(num)

# print(odd_num) 


# the same loop in comprehension 
# taking the num from the loop and checking it with the if condition, if true, then as 
# the loop is inside a list, a new list named odd_num2 will be created and the odd nums will be appended there 
odd_num2 = [num for num in a_list if num % 2 == 1]
print("odd num using comprehension : ", odd_num2)
print()

a_tp = 10, 34, 69, 6, 12, 45, 36, 57, 37, 24, 68 
# if we run the for loop other than square bracket, then we need to convert the o/p to the respected 
# bracket's data structure i am running the loop as tuple, so i need to convert the o/p into tuple 
# or we can directly run the loop in list format like this:  even_num = [num for num in a_tp if num % 2 == 0 if num > 20]
# comprehension loop with more than one condition 
even_num = (num for num in a_tp if num % 2 == 0 if num > 20)
print("even num using comprehension : ",tuple(even_num))

print()

# nested for loop using comprehension 
list_name = ['manna', 'sakib', 'hasan', 'kamal', 'aslam']

list_age = [20, 43, 23, 12, 24]

name_age = [(name, age) for name in list_name for age in list_age if age > 19]
print(name_age)
