# """
# QS 03: Make a pyjoke script using pyjokes 
# 151022, Saturday, 09.00 am 
#
# """

import pyjokes 
import sys 

def tell_some_jokes():
        print("PYJOKEs Joke: ", pyjokes.get_joke())

        
def stopPy():
        sys.exit()


def main():
        print()
        resp = int(input("PYJOKEs Command: To hear a joke press 1: ||  To stop the programme press 0:  "))
        print()
        print("YOUR Input: ", resp)
        print()
        if resp == 1:
                tell_some_jokes()
        elif resp == 0:
                print("PYJOKEs Exit: Thank you for playing with Pyjokes. Hope to see you soon!")
                print()
                stopPy()
        else:
                print("PYJOKEs Error: Invalid option. ")


while True:
        main()
