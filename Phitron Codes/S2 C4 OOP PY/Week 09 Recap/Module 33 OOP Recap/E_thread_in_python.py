"""  
Week 09: Recap week 
Module 33: OOP Recap
33-4_ Pandas in Python
Mod date: 291122, Tuesday
Watch date: 041222, Sunday, 9.40 pm
"""

# threading allows to run multiple operations simultaneously
from threading import Thread
from time import sleep, perf_counter

# we can calculate execution time by perf_counter 

# with single thread: programme will execute one command by one 
# start_time = perf_counter()
# def task_1():
#         for i in range(1, 6):
#                 print("Starting task: ", i)
#                 sleep(1)
        
# def task_2():
#         for i in range(6, 11):
#                 print("Starting new task: ", i)
#                 sleep(1)

# task_1()   # at first this method will execute, then the next command will execute 
# task_2()

# end_time = perf_counter()

# total_time = end_time - start_time
# print("Total time taken: ", total_time)

# with multiple threading 
start_time = perf_counter()
def task_1():
        for i in range(1, 6):
                print(f"Starting task: {i}\n")
                sleep(1)
        
def task_2():
        for i in range(6, 11):
                print(f"Starting new task: {i}\n")
                sleep(1)

t1 = Thread(target=task_1)
t2 = Thread(target=task_2)

t1.start()
t2.start()
t1.join()
t2.join()

end_time = perf_counter()

total_time = end_time - start_time
print("Total time taken: ", total_time)
