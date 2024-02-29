"""  
Py week 09: Recap week 
mod date: 281122, Monday
mod: 32 - Recap built-in data types, slicing, lambda function, zip 
32-4: Scope and Namespace in python  
291122, Tuesday, 08.00 pm 
"""

"""  
LEGB 
L = LOCAL (FUNC, CLASS)
E = ENCLOSED (NESTED FUNC)
GLOBAL = ALL OVER THE PROGRAMME 
BUILT - IN = BUILT IN OF PYTHON 
"""
# namespace allows us to reassign and reuse variables 


# Example 01: 
# Local and global 
s = 's : I am global'

def say():
        s = 's: I am local to func say() '
        print(f"{s} and my id is {id(s)}")

# say()
# print(f"{s} and my id is {id(s)}")


# Example 02: 
# Enclosed scope 
# enclosed -> local -> global -> built-in 

st = 'I am Global st' 

def outer_func():
        st = 'I am local of outer function'
        print(st)
        def inner():
                st = 'I am local of inner function and enclosed of outer_func'
                print("{} and my id is: {}".format(st, id(st)))
                # if this st is commented out, then outer_func will search for any local st, if no local st found in outer_func, then it search for global st, again if not found,  then it will  search for built-in st
        inner()

# outer_func()


# Example 03: 
# Enclosed(local of inner func) > Local > Global > Built-in 
from math import pi #and at last, the built-in will be accessed 

# pi = 12.09  # then the global 
# print(pi)
def outer_func():
        # pi = 20.23  # then this local of outer_func 
        # print(pi)
        def inner():
                # pi = 15.04    # this enclosed will be accessed first for the value 
                print(pi)
        inner()

outer_func()


