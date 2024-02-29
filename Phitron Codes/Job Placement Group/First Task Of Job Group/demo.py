import datetime as dt 

import random

dt_now = dt.datetime.today().strftime("%b")
# print(dt_now)

# x = dt_now.strftime("%B")
# y=dt_now.month
# print(y)
# print(dt_now.day)
# print(x)
demo_id_stuff = ['AA', 'AAA', 'BB', 'BBB', 'CC', 'CCC', 'DD', 'DDD', 'AB', 'AC', 'AD', 'BA', 'BC', 'BD', 
        'CA', 'CB', 'CD', 'DA', 'DB', 'DC', 'DD', 'ABA', 'ACAA', 'BAB', 'BCBB', 'CAC', 'CBCC', 'DAD', 'DBDD']

string = 'afabiuafab'
x = random.choice(demo_id_stuff)
y = random.randint(1245, 235312)
z = random.sample(string, len(string))
zz = random.choices(z, k=random.randint(2, 4))
# print(zz)
# print(z)
# print(x+str(y)+"".join(zz))

a = ['a', 'b', 'c']
b = "".join(a)
# print(b)

abc = dt.datetime.now().strftime("%b %d %Y, %H:%M:%S%p")
# print(abc)

lst = ['a', 'b', 'c']
if len(lst) != 0:
        print("Yes")
else: 
        print("No")
