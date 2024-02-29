"""  
Module Date: 161022, Sunday, 
Watch Date: 171022 and 181022, Monday and Tuesday, 08.30 am 
9_3 : Function as parameter and return a function 
"""

# def do_something(x, y):
#         print(f'x : {x}, y : {y}')

# do_something(True, False)

# receiving a function in a function 
def do_task(func):
        print('I am printing this from do_task() function')
        func()  # calling the function that has been passed to the parameter 
        print('Again I am printing this from do_task() function after func() parameter function')


def coding_practice():
        print('I am printing this form coding_practice() function')


do_task(coding_practice)