

import pandas 


'''
Python Project : Code WIth Harry (5 projects, length of video 03 ht, 08 minute )
waych beginning : 060423, Thursday, 13th Roja, 07.00 pm
Some basics like varialble, tycasting, comments etc. 

Video covered from : 25:00 to 53:00 minutes today. 
'''

# module in python is code written by others 


def var():
        a = "python"    
        A = '''python'''  # valid string 
        print(a)
        print(A)

        print(id(a))
        print(id(A))

        b = 'multi string' \
                'this is a continuation of the multi string'   # this goes in a single line in o/p

        c = '''this is also an example
                multi string
                and this is another break line '''   # this breaks line in the o/p, o/p gets new line 
                # from the string starts 
        
        d = "kul boi" \
                " kul boi "   # o/p is in same continued line, o/p doesnot get new line 
        
        
        print(b)
        print(c)

        print(d)

def user_input():
        name = input("Enter your name:  ")
        print(name)

        num = int(input("enter a num : "))
        print(num)

        str_num = input("enter a number : ")
        print(int(str_num) + 100)

        print(type(name))
        print(type(num))

        print(id(name))
        print(id(num))

def string_fun():
        st = "yo-"
        print(st.upper())
        print(st.isalnum())

        num = "10"
        print(num.isdigit())
        print(num.isnumeric())

        num_2 = "abc"
        print(num_2.isnumeric())
        print(num_2.isdigit())

        print(st.count('y'))

def fun():
        a = 10
        b = 20 
        c = 5
        print(a > c and b > a)
        print(c > a or b > a)

if __name__ == "__main__":
        print("Y")
        # print(not(False))
        # print(not(True))

        # fun()
        # string_fun()
        # user_input()
        var()