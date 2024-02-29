""" 101122, Thursday, py week 06 """

from pyautogui import press, typewrite
from time import sleep
from random import choice

lst = ['hello']

length = int(input("Input range:  "))
sleep(5)

i = 0 
while i<length:
        typewrite(choice(lst))
        press('Enter')
        sleep(1)
        i += 1 

