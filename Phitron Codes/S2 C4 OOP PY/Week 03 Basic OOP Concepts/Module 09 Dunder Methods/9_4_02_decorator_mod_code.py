"""  
Module Date: 161022, Sunday, 
Watch Date: 171022 and 181022, Monday and Tuesday, 08.30 am 
9-4-02: Decorator using @ symbol and module code 
and decorator using parameter 
"""

from math import factorial
from time import time 

def decorator_func(func):
        print('Inside', decorator_func.__name__,'Fucntion')
        def inner(*args, **kwargs):
                print('Inside', inner.__name__,'function')
                func(*args, **kwargs)
                print('Inside', func.__name__, 'function')
        return inner 

# making the facto func decoartive with decoraor_func decorator function 
@decorator_func
def facto(n):
        print('Inside facto(called from inner funcion) ', facto.__name__, 'function')
        res = factorial(n)
        print(f'factorial of {n} is {res}')
        

# calling the function 
facto(n = 3)
facto(5)

# quiz imp question 
"""  
9. In the following Python code, which function is the decorator?
def mk(x):
    def mk1():
        print("Decorated")
        x()
    return mk1
def mk2():
    print("Ordinary")
p = mk(mk2)
p()

a) p()
b) mk()
c) mk1()
d) mk2()

Explanation: In the code shown above, the function mk() is the decorator. The function which is getting decorated is mk2(). The return function is given the name p().


"""
