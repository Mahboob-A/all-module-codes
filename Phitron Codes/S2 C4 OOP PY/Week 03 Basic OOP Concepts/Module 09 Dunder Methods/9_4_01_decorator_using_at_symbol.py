"""  
Module Date: 161022, Sunday, 
Watch Date: 171022 and 181022, Monday and Tuesday, 08.30 am 
9-4-01: Decorator using @ symbol 
"""


def display_info(func):
        print('It is inside', display_info.__name__, 'function')

        def inner():
                func()
                print(func.__name__, 'Function finished execution')

        return inner

# we need to place the decorator function i.e the function that takes a function as a parameter
# before the function we want to add the features of decorator function 
# here all the features of decorator function will be addeded to the function it is 
# attached with @smybol 
@display_info   
def printer():
        print("See! I am writing a line via (decorator)", printer.__name__, " function!")


# now as we have addeded the features of decorator function with printer function, we just need to 
# call the printer function to get the combined features 
# And we have used @ symbol, we do not need to call decorator function and inside it, pass the printer function
# rather it will now work directly 
printer()

# ## Adding @ symbol on the top of a function definition means that 
# we are passing that function as an argument to the decorator function 

"""  

@display_info   
def printer():
        print("See! I am writing a line via (decorator)", printer.__name__, " function!")

here the printer() is passed to the display_info functon 

"""
