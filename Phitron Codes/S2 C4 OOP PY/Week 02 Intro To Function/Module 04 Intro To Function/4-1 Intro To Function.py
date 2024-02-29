# 091022, Sunday, 07.00 am 
# Week 02, Intro To Function 
# 4-1 Simple Introduction To Function In Python And Return


# just a simple function
# we need to use def keyword to define a function in python 
def double_it(num) :
        result = num * 2 
        print(result)

double_it(10)

# a function to add two numbers 
def add(a, b) :
        result = a + b 
        return result 

# calling the add function 
sum = add(10, 20)
print(sum)

# a function to multiply two numbers 
def multiply(num1, num2) :
        result = num1 * num2 
        return result

# calling multiply fucntion 
multi = multiply(50, 100)
print(multi)

# passing the sum and multi var again in add function 
final_add = add(sum, multi)
print('final addition is:',final_add)

