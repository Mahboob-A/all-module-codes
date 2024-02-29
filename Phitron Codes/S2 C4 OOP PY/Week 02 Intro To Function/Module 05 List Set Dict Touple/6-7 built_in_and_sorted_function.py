# Week 02 : Module 05:  List Set Dict And Touples
# 111022, Tuesday, 12.00 pm
# 5-7 built in functions and sorted function 

# """  
# Sorted function anything sort korar jonno use kora hoy. 
# ascending order e sort korar jonno sorted(dt)
# and to sort in descending order, we need to use " reverse = True " this keyword followed by a coma
# 
# """

from multiprocessing.sharedctypes import Value


print()


a_list = [12, 56, 33, 23, 65, 67, 87, 43, 5, 34, 55]

# sorting the list 
sorted_list = sorted(a_list)
print("priting the sorted list: ", sorted_list)

# sorting the list in reverse order 
sorted_list_rev = sorted(a_list, reverse = True)
print("Printing the list in descending order: ", sorted_list_rev)

# sorting a tuple 
a_tuple_names = 'ok', 'hi', 'yes', 'kul', 'thanks', 'done', 'alright'
sorted_tp = sorted(a_tuple_names)
print("Printing the sorted tuple: ", sorted_tp)



print()

# soriting a list of dict 
actors = [
        {'name' : 'sakib khan', 'age' : 35},
        {'name' : 'saruk khan', 'age' : 53},
        {'name' : 'soleman khan', 'age' : 50},
        {'name' : 'amir pandey', 'age' : 49},
        {'name' : 'akkhoy kumar', 'age' : 45},
        {'name' : 'chulbul pandey', 'age' : 58},
        {'name': 'roton khanna', 'age': 40}
]

# print(actors)
# to sort a dict, we need to use the  " key " keyword and provide a method to sort 
# and we are giving a lambda function and providing the key as 'age' 
sorted_actors = sorted(actors, key = lambda actor : actor['age'])
print("Sorting the actors  based on age: ", sorted_actors)
print()

sorted_actors_name = sorted(actors, key = lambda actor : actor['name'] )
print("Sorting the actos based on names: ", sorted_actors_name)


print()
