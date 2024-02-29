# Week 02 : Module 05:  List Set Dict And Touples
# 111022, Tuesday, 09.30 am
# 5-5 Explore lamda with map, filter on list and dictionary

# """  
# Filter is just like the ma. Filter also takes a method and a iterable i.e a dt to iterate to imply the method i.e the function 
# 
# 
# 
# 
# """

print()


a_list = [23, 34, 57, 24, 59, 25, 76, 45]

def getBig(x) :
        if x > 25 : 
                return x 

# x = getBig(100)
# print(x)


# filtering the list using the filter function 
# here we have goven a lambda method that takes a vaule and if it is bigger than 25, then returns it 
bigger_num = filter(lambda x : x > 25, a_list)
print(list(bigger_num))

# the same working with a function 
big_num = filter(getBig, a_list)
print(list(big_num))

# this will return the value if the value is > 25 if not, it will return none 
# what if we use map instead of filter here? 
big_num_map = map(getBig, a_list)
print(list(big_num_map))

# same working with lambda 
# this will return true and false answer, if the value is > 25 then true, else it will return false 
bigger_num_map = map(lambda x: x > 25, a_list)
print(list(bigger_num_map))


# hence, if we need to filter something based on some criteria, we need to use filter not map although 
# both takes same things as parameter 


# filter on dictionary 
# maiking a list of dict 
actors = [{'name' : 'sakib', 'age' : 34},
                {'name' : 'manna', 'age' : 50},
                {'name' : 'sabana', 'age' : 60},
                {'name' : 'bubli', 'age' : 30}]

# print(actors)
# filtering the actors that are age > 45 
# we are filtering based on the key 'age' and passing the list of dict in the filter function 
senior_actors = filter(lambda actor : actor['age'] > 45, actors)
print("Senior actors are: ", list(senior_actors))

junior_actors = filter(lambda actors : actors['age'] < 35, actors)
print("Junior actors are: ", list(junior_actors))


print()