"""  
Module Date: 161022, Sunday, 
Watch Date: 171022 and 181022, Monday and Tuesday, 06.45 pm 
9-8: Cache decorator from functool 
"""
from functools import partial 

def get_num(a, b, c, d):
        return a * 1000 + b * 100 + c * 10 + d


# value = get_num(10, 4, 5, 6)
# print(value)

num = partial(get_num, 10, 30, 5)
num_2 = num(3)
print(num_2)


def email(name, domain, extension):
        print(name + domain + extension)


# we can now only pass one argument. We need to provide the function name and the first parameter in the parameter of the partial function And receive it. Where we have receive it, use it as func parameter and pass the default value 
partl = partial(email, 'yurious')
partl('@gmail', '.com')
