"""  
Module Date: 161022, Sunday, 
Watch Date: 171022 and 181022, Monday and Tuesday, 08.30 am 
9-4: Decorator in py 
"""

def display_info(func):
        print('It is inside', display_info.__name__, 'function')

        def inner():
                func()
                print(func.__name__, 'Function finished execution')
        
        return inner


def printer():
    print("See! I am writing a line via (decorator)", printer.__name__, " function!")

# display_info(printer)() this line and below line both are same 

receive_deco = display_info(printer)
receive_deco()
