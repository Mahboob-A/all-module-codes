# Week 02 : Module 05:  List Set Dict And Touples
# 111022, Tuesday, 08.30 am
# 5-5 Explore lamda with map, filter on list and dictionary

# """  
# Map takes a method and a dt and map will apply the method to all the elements of the dt iterately. 
# if we give a method of x * 2 i.e double the x and a list to map, then map will apply this method to all
# the elements of the dt i.e map will multiply the all list's value with 2 iterately 
# 
# map will return the pointer to the updated value so we need to receive it and as a pointer
# address will be returned, we need to convert the pointer to the dt we passed in the map 
# 
# """
print()


a_tp = 10, 56, 23, 56, 36, 37

print("Printing the original tuple: ", a_tp)
print()
# making a lambda function for map method 
tp_double = lambda x : x * 2 

# mappiny the tp by passing the tp_double as the method and a_tp as dt 
# now, map will imply the method to all the elements of a_tp iterately 
double_tp_by_mapping = map(tp_double, a_tp)

# now, the updated values are passed to double_tp_by_mapping var 
# and as it is a pointer address, we need to convert it to tuple as we have sent tuple as dt in the map
print("Printing the tuple as double using mapping: ", tuple(double_tp_by_mapping))

print()
# we can also directly pass the method to the map like this: 
# we are now making all the elements of the tuple squre using mapping 
double_tuple = map(lambda x : x * x, a_tp)

print("Now printing the square of the tuple a_tp using mapping : ", tuple(double_tuple))
# print(tuple(double_tuple))

print()