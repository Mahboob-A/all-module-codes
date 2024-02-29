# 021022 Sunday  None as NULL is python 

"""  
in python, we write None as NULL value. None is a object of Nonetype and we can assign None to variables 
Void functions that do not return anything will return a None object automatically. 
None is also returned by functions in which the program flow does not encounter a return statement.


"""

def a_function(value) :
        if value % 2 == 0: 
                return True

x = a_function(3)
print(x)

# here x is None as None will be returned implicitly as the value is odd, and there's nothing to do with odd number, hence
# the function will return None or NULL of cpp to the calling variable 

def another_function(value):
        a = 10
        b = 20
        sum = a + b


x = another_function(10)
print(x)

# here the x will also be None as the function returns nothing that's why None will be returned implcitly 