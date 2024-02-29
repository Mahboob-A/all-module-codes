

"""  
Question link: https://docs.google.com/document/d/1GVEHp_KWY-Jau9ihP_9PtQ-mVZr8DRsHQep3qkjE8Ks/edit
Py week 09: Final Theory Exam 
Exam date: 011222, Thursday
Exam last date: 081222, Thursday
Exam writing start date: 051222, Monday, 07.30 pm
Today date: 061222, Tuesday, 08.00 am 

Question 05:You need to find bugs from the python program below and 
give a correct python code to show as output given below. You can't add extra lines, 
you just need to modify the given code so that you can get the expected output.	
"""

# incorrect code: 
# data = [{'a': 5, 'b': 10}, {'x': 15, 'y': 20}]
# for val in range(data):
#     for key, val2 in val:
#         print(f"Key:{key} Value:{data[key]}")


data = [{'a': 5, 'b': 10}, {'x': 15, 'y': 20}]
for val in range(len(data)):
    for key, val2 in data[val].items():
        print(f"Key:{key} \t Value:{val2}")



