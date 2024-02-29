
"""  
Question link: https://docs.google.com/document/d/1GVEHp_KWY-Jau9ihP_9PtQ-mVZr8DRsHQep3qkjE8Ks/edit
Py week 09: Final Theory Exam 
Exam date: 011222, Thursday
Exam last date: 081222, Thursday
Exam writing start date: 051222, Monday, 07.30 pm
Today date: 051222, Monday, 10.00 pm 

Question 03: Write  a python program to describe the types of scope in python. 	
"""
from random import randint
b = 8
def func(b):
        b = 7
        print(id(b))

# func(b)
# print(id(b))


# def demo(Str):
#     print(Str)
#     Str = "You are smart"
#     print(Str)


# # Global scope
# Str = "You are Clever"
# demo(Str)
# print(Str)


def func_outer():
    a = "local"

    def func_inner():
        # nonlocal a
        # a = "nonlocal"

        print("inner:", id(a))
    func_inner()
    print("outer:", id(a))


# func_outer()
##########################################################

# py programe to demonstrate scope in python 

from string import  ascii_lowercase

# IMP PLEASE READ =>: # Step 04: Now string contains some values of built-in of python. Although string directly does not become built-in, 
# but I just tried to put built-in values in string variable. As there are no built-in variable named "string" in python, 
# so I had to showcase the built-in using the string variable likewise just to maintain the flow of the programme. 
# Hope you understand. Here the built-in is "ascii_lowercase". 
 
string = f"I am string variable and now I contain built-in values of string module: {ascii_lowercase}"

# Step 03: string is now in Global scope. If string is not defined in neither funcs below, then the interpreter searches for string variable in 3rd 
# step in Global scope

string = "I am string variable and now I am in Global scope"   # global scope of string 



def Outer_func():
    # a is local of Outer_func
    a ='A'

    # Step 02: If string is not defined in Inner_func, then interpreter searches string here, i.e in the local scope of Outer_func. And if 
    # string is defined here, then string becomes enclosed in Inner_func. But String remains local to Outer_func
    string = f"I am string variable and I am Local scope of {Outer_func.__name__}"    # local scope of string in Outer_func

    def Inner_func():
        # a is nonlocal in Inner_func
        print(f"A Variable Is Being Printed From: {Inner_func.__name__} => I am variable {a} and I am in a nonlocal / enclosing scope of {Inner_func.__name__}")

        # Step 01: interpreter searches for string from here: from local of Inner_scope, if this string is not defined here and string in Outer_func is defined
        # then string becomes nonlocal / enclosed of Inner_func 

        string = f"I am String variable and I am in local scope of {Inner_func.__name__}"   # local scope of string in Inner_func

        print(f"String Variable Is Being Printed From: {Inner_func.__name__} => ", string)

    Inner_func()


Outer_func()