
"""  
Question link: https://docs.google.com/document/d/1GVEHp_KWY-Jau9ihP_9PtQ-mVZr8DRsHQep3qkjE8Ks/edit
Py week 09: Final Theory Exam 
Exam date: 011222, Thursday
Exam last date: 081222, Thursday
Exam writing start date: 051222, Monday, 07.30 pm
Today date: 061222, Tuesday, 11.45 am 

Question 08:
You need to write a python lambda function to tell whether a number is even or not . If it is even, return “Yes” otherwise “No”.							5

print(even_odd(5))
Output:
No
"""

# one line function to find odd_even 
def odd_even(val): return 'Yes' if val % 2 == 0 else "No"
x = odd_even(101)
# print(x)


# lambda func to find odd_even
even_odd = lambda val : 'Yes' if val%2==0 else "No"

x = even_odd(5)
print(x)



# def even_odd(val):
#         res = lambda val : 'Yes' if val%2==0 else "No"
#         return res 

# print(even_odd(5))


