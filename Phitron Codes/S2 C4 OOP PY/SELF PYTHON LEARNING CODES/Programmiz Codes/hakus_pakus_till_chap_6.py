'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.


print ('Hello World')

# list or array in python 
fol = ['aam', 'jam', 'lichu', 'kathal', 'aro koto ki']
print(fol[0] + ' ' +fol[4])

robi = 1000
kobi = 300
mobi = 200 

# if else in pyton 
# we can use back slash in if elif condition if the condition is too learge and then we can write it in next line 
date = 'sunday'

if date == 'sunday' and \
    (robi < 600 or (kobi > 300 and mobi < 200)) :
    print('go')
else :
    print('no')
    
'''


# while loop structure in python
i = 0
while i < 3:
    print("Yo man how u doin", i)
    i += 1

print('\n')

# for loop in python i is incrimenting by one
for i in range(3):
    print('Yo hows the day', i)

print("\n")

j = 'kool'
for i in j:
    print('kul boi', i)


print("\n")
# incrising loop by 2

i = 1
while i < 15:
    print('while loop i is incrimenting by 2: ', i)
    i += 2

print("\n")
# incrimenting for loop i by 2 using range
# the first 1 is the i's beginning value, 15 is the end value, and 2 is the (i+2 type) value it indicates the i incrimentation value
for i in range(1, 15, 2):
    print('for loop i is incrimenting by 2: ', i)


print('\n')
# list or array print in python

fol = ['aam', 'jam', 'lichu', 'kathal', 'kola', 'anaros']

# printing in while loop
i = 0
while i < 6:
    print('fol: ', fol[i])
    i = i + 1

print('\n')
# list printing in for loop
for i in range(6):
    print('fol in for loop: ', fol[i], '  || i value: ', i)


print("\n")
# list print in pyhton own style
# here the i value is not any index rather i value is itself the values of the list
# that's why "fol in list: ", i" will print the elements of the list and " i value: ", i " will also print the
# values of the list unlike the previous while or for loop
print("for loop in python style: ")
for i in fol:
    print("fol in list: ", i, "  || i value: ", i)


print('\n')
# now search in python list
# we can search basically in three ways in a list i) the first one is iterative way ii) 2nd one is using " in " and " not in "
# and the 3rd is using in and if else
print("Find something in a list by iterative way: ")
print("Break in loop: ")

fruits = ['aam', 'jam', 'lichu', 'kathal', 'kola', 'anaros']

found = 'False'
for fruit in fruits:

    if fruit == 'kola':
        found = 'True'
        break


if found == 'True':
    print("Kola is available")
else:
    print("Kola is not available")

print("\n")
print("Find something in a list using in and not in")

if 'angur' in fruits:
    print("angur is available in the list")
if 'angur' not in fruits:
    print("angur is not available in the list")


print('\n')
print("Find something in a list using in and if else")

if 'anaros' in fruits:
    print("anaros is available")
else:
    print("anaros is not available")


print("\n")
# continue is same as in c or cpp
print("Continue in loop: ")

sum = 0
for i in range(1, 15):
    if i % 2 == 0:
        continue
    sum += i

print(sum)
