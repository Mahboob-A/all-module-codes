"""  
Question link: https://docs.google.com/document/d/1GVEHp_KWY-Jau9ihP_9PtQ-mVZr8DRsHQep3qkjE8Ks/edit
Py week 09: Final Theory Exam 
Exam date: 011222, Thursday
Exam last date: 081222, Thursday
Exam writing start date: 051222, Monday, 07.30 pm
Today date: 051222, Monday, 9.30 pm 

Question 02: Write a python program to make the data given below 
using list and dictionary comprehension and print it.
"""

data={1:[2,3,4,5],2:[1,3,4,5],3:[1,2,4,5],4:[1,2,3,5],5:[1,2,3,4]}

# answer: 
dct = {key: [val for val in range(1, 6) if val != key] for key in range(1, 6)}
print(dct)


# testing

# x   = {key : val for (key, val) in data.items()}

y = square_dict = {num: num*num for num in range(1, 11)}

dct = {k1: {k2: k1 * k2 for k2 in range(2)} for k1 in range(5)}
dct2 = {k1: {k2: k1 * k2} for k2 in range(2) for k1 in range(5)}
# print(dct)
# print(dct2)

# x   = {key : [ i for i in range(1, 6)] for (key, val) in range(1, 6)}
# x = [i for i in range(1, 6)]
x = {key : [i for i in range(1, 6) if i != key] for key in range(1, 6)}
print(x)