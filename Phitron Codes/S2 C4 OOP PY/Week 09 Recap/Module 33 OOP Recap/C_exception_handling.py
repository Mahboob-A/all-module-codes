"""  
Week 09: Recap week 
Module 33: OOP Recap
33-3_ Exception Handling in Python
Mod date: 291122, Tuesday
Watch date: 041222, Sunday, 03.45 pm 
"""

# exception handling in python 
# try:
# except: 
# else:
# finally

# Try: try block will execute only if the code inside the try block does not have any error.
# Else: else block will execute only when the try block runs. It runs along with the try block, it try runs, then else also runs.
# Except: except will run only when the code inside the try block has error. Thus try will not execute and then the 
# except block will execute. We can write as many as exception in our code.
# Finally: finally block will execute all the time, i.e it will run for both try and except block, whichever runs, it will be executed. 

def get_div(x, y):
        try:    # only executes when the code does not have any error 
                res = x // y # floor div -> will get int val 
                
        # except Exception as e:
        #         print(e)
        except ZeroDivisionError:  # only executes when try does not execute 
                print("Zero Division Error! Can not devide with zero! ")
        except ValueError:
                print("Value Error!")
        else:                   # only execute when try executes
                print(res)   
        finally:                # always executes 
                print(f"Division of {x} and {y} calculated successfully!")
        

get_div(10, 2)
