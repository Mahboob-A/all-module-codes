# QS 4 Type of number 
# 021022, Sunday, 11.30 am 

""" 
Write a Python program to check if user entered number is ZERO, POSITIVE or
NEGATIVE until user does not want to quit.
User will type ‘Quit’ to close the program.
Sample:
> Enter input: 2
> 2 is positive
> -3
> -3 is negative
> “Quit”
> (stop the program)

"""

space = ('\n')
print(space)



while True :
        input_value = input('Hey, give a input: ')
        if input_value == 'quit' :
                print('Program is stopped')
                break
        elif int(input_value) < 0:
                print('The value is negative')
        elif int(input_value) > 0:
                print("The value is positive")
        elif int(input_value) == 0:
                print('The value is zero')
        










print(space)