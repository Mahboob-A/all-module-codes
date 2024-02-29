# 091022, Sunday, 07.30 pm
# Week 02, Intro To Function
# 4-4 Access And Modify Global Variables

"""  
When we declare a global variable, and we want to access it from local or by a local variable like from a fucntion,
we only can read the value of the global variable and we can not re-write the value of the global varialble. 
If we need to re-write, we need to use " global " keyword to re-write the global variable. 

"""
print()

balance = 1000 

def balance_management(price, quantity) :
        cost = price * quantity 
        # this below line only reads the global variable but it is unable to re-write it 
        remaining = balance - cost 
        print(remaining)
        print(balance)


balance_management(10, 5)

print()

total = 1000 

def inventory_management(price, quantity) :
        # now as we have declared the global var inside the function, we can re-write now  
        global total 
        cost = price * quantity 
        # total = total - cost 
        remaining = total - cost 
        total = remaining 
        print("cost", cost)
        print("current total: ",total)


inventory_management(5, 50)

print()
