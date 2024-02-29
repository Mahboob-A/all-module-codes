# 1-8take user input

space = ("\n\n")
print(space)

print(f'Python programming language takes string input by default with input function.\nIf we need to take a integer of float input\nThen we need to typecast to the respected value. ')

name = input("What is your name: ")

age = input("What's your age: ")


print(name, age)


print(f'the name of the user is {name} and the age is {age}')


# taking input with typecasting the str value
num = int(input("Input the number: "))

print(f'The number is {num}')

print(type(num))


integer1 = input("Input a integer value: ")

# converting the str type onput to int type
in_int_form = int(integer1)

print(in_int_form)


print(space)
