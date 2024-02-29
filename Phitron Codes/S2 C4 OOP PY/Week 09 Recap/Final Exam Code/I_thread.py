
"""  
Question link: https://docs.google.com/document/d/1GVEHp_KWY-Jau9ihP_9PtQ-mVZr8DRsHQep3qkjE8Ks/edit
Py week 09: Final Theory Exam 
Exam date: 011222, Thursday
Exam last date: 081222, Thursday
Exam writing start date: 051222, Monday, 07.30 pm
Today date: 061222, Tuesday, 2.45 pm 

Question 09:
Run the below functions in 4 threads.						10


def f1():
    for i in range(5):
        print(f"f1 - {i}")


def f2():
    for i in range(5):
        print(f"f2 - {i}")


def f3():
    for i in range(5):
        print(f"f3 - {i}")


def f4():
    for i in range(5):
        print(f"f4 - {i}")
"""



from threading import Thread
from time import sleep

def f1():
        # print()
        for i in range(5):
                print(f"f1 - {i}\n")
                sleep(2)


def f2():
        # print()
        for i in range(5):
                print(f"f2 - {i}\n")
                sleep(2)

def f3():
        # print()
        for i in range(5):
                print(f"f3 - {i}\n")
                sleep(2)


def f4():
        #print()
        for i in range(5):
                print(f"f4 - {i}\n")
                sleep(2)

t1 = Thread(target=f1)
t2 = Thread(target=f2)
t3 = Thread(target=f3)
t4 = Thread(target=f4)

t1.start()
t2.start()
t3.start()
t4.start()

t1.join()
t2.join()
t3.join()
t4.join()

