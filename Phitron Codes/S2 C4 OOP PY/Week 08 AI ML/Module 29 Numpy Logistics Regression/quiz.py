"""  
Py week 08: ML 
Module 29: Numpy and Logistics Regression 
Mod date: 201122, Sunday
Watch date: 241122, Thursday, 11.10 pm 
quiz
"""

# import numpy as np
# dt = np.dtype([('age', np.int8)])
# a = np.array([(10,), (20,), (30,)], dtype=dt)
# print(a['age'])

import numpy as np
a = np.array([1, 2, 3, 4, 5], ndmin=2)
print(a)
print(np.arange(2, 8))

aa = np.array([[[1, 2, 3], [4, 5, 6]]])
print(aa.ndim)

print(np.linspace(1,5,5))