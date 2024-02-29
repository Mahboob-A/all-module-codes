"""  
Question link: https://docs.google.com/document/d/1GVEHp_KWY-Jau9ihP_9PtQ-mVZr8DRsHQep3qkjE8Ks/edit
Py week 09: Final Theory Exam 
Exam date: 011222, Thursday
Exam last date: 081222, Thursday
Exam writing start date: 051222, Monday, 07.30 pm
Today date: 071222, Wednesday, 11.00 am 

Question 6:  

You need to write a python program to take an integer input from the user and print a pattern given below.									10

When n=5,
12345
21345
23145
23415
23451
 
When n=7,
1234567
2134567
2314567
2341567
2345167
2345617
2345671

"""

# When n = 5,
# 12345
# 21345
# 23145
# 23415
# 23451

# When n = 7,
# 1234567
# 2134567
# 2314567
# 2341567
# 2345167
# 2345617
# 2345671


n = int(input("Enter number of rows: "))
lst = list(range(1, n+1))


for indx in range(n):
        for i in range(n):
                print(lst[i], end=" ")
        if (indx+1) != n: 
                lst[indx], lst[indx+1] = lst[indx+1], lst[indx]
        print()

