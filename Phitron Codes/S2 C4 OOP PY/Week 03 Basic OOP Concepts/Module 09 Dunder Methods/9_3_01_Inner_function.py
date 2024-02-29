"""  
Module Date: 161022, Sunday, 
Watch Date: 171022 and 181022, Monday and Tuesday, 08.30 am 
9_3_01: Function as parameter and return a function ## Inner Function 
"""

# we can declare a fn inside another function 
# and we can call it there or return the 2nd function 

def first_function():
        print("Printing form the first function")
        def inner_func():
                print("Printing from the second inner function")
        inner_func()  # calling the second function directly inside the 1st function 


# first_function()


def first_func():
        print("Printing from the first_func function")
        def second_inner_func():
                print("Printing from the inside of second inner function")
        return second_inner_func


# receive_func = first_func() #calling the first main function and receiving the inner function 
# receive_func() # now calling the received function 

first_func()() # we can also call the both of the function, the main and the inner like this way 
# first_func()  # this will only call the main first_func() function 
