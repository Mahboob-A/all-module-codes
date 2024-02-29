# 091022, Sunday, 10.00 am
# Week 02, Intro To Function
# 4-2 Optional Parameters And Args


# when we do not know how many parameters we need to send, we then can pass like a touple 
# for this we need to use arg / asteris * and just one variable name and we can pass as many as we want 
# parameter in the function. And inside the function, we can assess the values using a loop 


def add (*numbers) :
        result = 0
        for num in numbers :
                result += num 
        return result 

x = add(10, 59, 23, 23, 36, 12)
print(x)


# here num1 and num2 is ouside of touple so, all the values passed form the function parameter are not included in the touple 
# the first two values are assigned normally to num1 and num2 variable 
def add2(num1, num2, *numbers):
        result = 0
        for num in numbers:
                result += num 

        print("Num1:",num1 )
        print("Num2:", num2)
        print("touple:", numbers)

        result += num1 
        result += num2 
        return result 

y = add2(2, 4, 6, 8, 10)
print("Total: ", y)

print()                

