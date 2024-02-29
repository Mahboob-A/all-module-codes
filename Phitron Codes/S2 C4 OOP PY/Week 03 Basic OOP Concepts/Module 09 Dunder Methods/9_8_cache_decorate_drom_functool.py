"""  
Module Date: 161022, Sunday, 
Watch Date: 171022 and 181022, Monday and Tuesday, 06.45 pm 
9-8: Cache decorator from functool 
"""

"""  
cache is also called memorization. When the programme does the same mathematical process to produce a new result, like finding fibonacchi or factorial, we can cache the previous result so that we do not need to perform the same task again to produce a new result 
"""

# cache is in functools module 
from functools import cache 
from time import time

# fib func 
@cache  # without cache, it would take much more time to execute the programme 
def fib(n):
        if n <= 1:
                return 1
        return fib(n-1) + fib(n-2)

start = time()
for val in range(10):
        print(val, fib(val))

end = time()

mili_sec = (end - start) * 1000
print('Total time taken in second: ', end - start)
print("Total time taken in mili seccond: ", mili_sec)
