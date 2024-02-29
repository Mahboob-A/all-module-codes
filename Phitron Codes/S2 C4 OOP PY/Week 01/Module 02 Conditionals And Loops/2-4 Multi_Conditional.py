# 2-4 multi conditional
# 011022 Saturday, 09.00 pm

from operator import truediv


space = ("\n")
print(space)

print("in this video, jhankar bhaia talks about || && or and - and nedted conditionals")
print(space)


exam = 'WBCS'

exam2 = 'BANKKKKK'


passed = True

# multi condition
if exam == 'WBCS' and passed == True:
    print("Congo! You have passed the examination")
    print('Kul boi')
    print('kul')
else:
    print("Try next time")


if exam == 'WBCS' or exam2 == 'BANK':
    print("Passed the exam: Kul boi")
else:
    print('Try again')


# nested conditin

salary = 50000

has_flat = True

if salary > 35000:
    if has_flat == True:
        print("Live your to fullest")
    else:
        print("Bepar na, try korte thako")
        print("Work harder")
else:
    print('Try again to level up')


print(space)
