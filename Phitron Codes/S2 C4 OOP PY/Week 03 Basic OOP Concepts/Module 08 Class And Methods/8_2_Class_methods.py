
"""  
Week 03: Basics of OOP Concepts 
Module 08: Class And Methods 
08 - 2 : Class And Methods 
161022, Sunday, 11.00 am 

"""
print()

from time import sleep

class Phone:
        name = None
        brand = None
        price = 0 

        def call_phone(self, number):
                sleep(2)
                print(f'Calling to {number}')
                i = 3
                while(i>0):
                        sleep(2)
                        print("ring ring ring")
                        i = i-1 
                return 'The number is not responding to your call'

        def send_sms(self, number, text):
                sleep(2)
                i = 3
                while(i>0):
                        sleep(2)
                        print('sending sms, please wait...')
                        i = i-1 
                sms = f'Message sent : {text}, to: {number}'
                return sms 


my_phone = Phone()

another_phone = Phone()

my_phone.name = 'XT'
my_phone.price = 20000 
my_phone.brand = 'Realme'

print(my_phone.name)
print(my_phone.price)
print(my_phone.brand)

sleep(2)
call = my_phone.call_phone(8513998991)
sleep(2)
print(call)

sleep(2)
sms = my_phone.send_sms(8513998991, 'Hi how are you')
sleep(2)
print(sms)

sleep(2)
another_sms = another_phone.send_sms(7908184346, 'Hi, I am sending this sms from python!')
sleep(2)
print(another_sms)
sleep(2)
print()