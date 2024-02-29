# 021022 Sunday assert in python 

"""  
While programming, sometimes we wish to know the internal state or check if our assumptions are true. 
Assert helps us do this and find bugs more conveniently. assert is followed by a condition.

If the condition is true, nothing happens. But if the condition is false, AssertionError is raised

The assert keyword is used when debugging code.

The assert keyword lets you test if a condition in your code returns True, if not, the program will raise an AssertionError.


"""

a = 10 

# assert a > 10 
# nothing will hapen here 
a == 10  

# as this condition is false assertion error will be shown here
assert a < 10, "Check the value again"
