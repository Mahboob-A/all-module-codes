

"""  
Question link: https://docs.google.com/document/d/1GVEHp_KWY-Jau9ihP_9PtQ-mVZr8DRsHQep3qkjE8Ks/edit
Py week 09: Final Theory Exam 
Exam date: 011222, Thursday
Exam last date: 081222, Thursday
Exam writing start date: 051222, Monday, 07.30 pm
Today date: 061222, Tuesday, 10.00 am 

Question 07:
# You need to slice the list with values which are divided by 3. The list is given below.    5

# lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20]


# Output:
# [3, 6, 9, 12, 15, 18]
"""


# You need to slice the list with values which are divided by 3. The list is given below.    5
# Output:
# [3, 6, 9, 12, 15, 18]

lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20]
div_ = lst[2:21:3]   # [start  : end  : step]
print(div_)

# def get_slice(lst, div_):
#         # for i in range(0, len(lst)):
#         x = slice(0, len(lst), div_/3)
#         return x 

# x = list(get_slice(lst, 3))
# print(x)


# for i in range(len(lst)):
#         x = [i :  i*i]
# print(x)

# my_list = [2, 4, 6, 5, 3, 9, 7]
# print(f"The list has {len(my_list)} elements")

# my_list[0:3] = ['black', 'yellow', 'gray', 'blue']
# print(my_list)
# print(f"The list now has {len(my_list)} elements")



