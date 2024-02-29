# Week 02 : Module 05:  List Set Dict And Touples
# 111022, Tuesday, 08.30 am
# 5-5 Explore lamda with map, filter on list and dictionary

# Lambda is a keyword that is useful to make short functions
# its working is similar to ternary operator 
# structure of lambda: 
# 
# funct name = lambda parameters seperated with coma : working of the function 
# the working of the function will be automatically returned to the function name 

# a function to square 
def sq(x) :
        return x * x 

x = sq(10) 
print(x)

# this same function in lambda will be: 
sq2 = lambda x : x * x 

y = sq2(5)
print(y)

# we can take as much as parameter we want seperated with coma 
add = lambda x, y : x + y 

z = add(10, 20)
print(z)
