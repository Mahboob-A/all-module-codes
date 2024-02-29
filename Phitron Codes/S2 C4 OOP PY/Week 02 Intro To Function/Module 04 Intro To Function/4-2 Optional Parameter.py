# 091022, Sunday, 08.00 am
# Week 02, Intro To Function
# 4-2 Optional Parameters And Args



# optional parameter 
# we can define as much as we wish as optional parameter or set defalut value 

# def add(num1, num2, num3 = 1)
        # result = num1 + num2
        # return result

def add(num1 = 1, num2=1):
        result = num1 + num2 
        return result

# if not all the parameters are passed, then the working of the function will include the default value of optional parameter 
x = add(10)
print(x)

# if all the parameters are passed, then the working of the function will not include the default value of the optional parameter 
# rather the passed value will be the working parameter 
y = add(10, 50)
print(y)

# as the dunction has both parameter as optional or default value, we can, if wish, not pass any value to the function 
# so, now, the function will be working on its defalut value 
z = add()
print(z)