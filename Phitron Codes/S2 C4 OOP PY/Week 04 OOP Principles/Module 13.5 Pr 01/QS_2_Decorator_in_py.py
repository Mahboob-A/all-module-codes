"""  
Module: 13.5 :: Pr day 01
261022, Wednesday, 07.00 pm
QS 02: call a function with and without decorator 
"""


def deco(func):
    def inner(a, b):
        if b == 0:
            print("Can't div by 0")
            return
        return func(a, b)

    return inner


@deco
def div(a, b):
    return a/b


v = div(10, 5)

print(v)
