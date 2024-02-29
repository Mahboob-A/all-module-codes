

'''
Python Project : Code WIth Harry (5 projects, length of video 03 ht, 08 minute )
waych beginning : 290323, Wednesday, 6th Roja, 06.20 pm
Some basics like varialble, tycasting, comments etc. 

Video covered from : 00:00 to 25:00 minute today. 
'''



# print("hey")

# print("I am back to python again!")



def fun():
        print("cool recap!")


def variable():
        # variable 
        a = 10
        print(a)
        print(id(a))

        a = 6.5
        print(a)
        print(id(a))
        
        b = "string"
        print(b)
        print(id(b))

        b = "new string"
        print(b)
        print(id(a))


def typecast():
        a = 10
        print(a)

        b = "ten"
        print(b)

        print(a + 1)

        # print(int(b) + 1) this will give error as we can not typecast "ten" into an int
        #  we do can typecast "10" into int, that's why this code will give error
        # but the below line will execute safely

        c = "10"
        print(int(c) + 1)


def operators():
        a = 10 
        b = 3
        print("a + b", a + b)
        print("a - b", a - b)
        print("a * b", a * b)
        print("a / b", a / b)
        print("a // b | floor division/int division ", a // b)
        print("a ** b | exponentiation 10^3 ", a ** b)
        print("a % b | Moduls (reminder) ", a % b)
        print("a % b | XOR operator in python ", a ^ b)



if __name__ == "__main__":
        # fun()
        # variable()
        # typecast()

        operators()




