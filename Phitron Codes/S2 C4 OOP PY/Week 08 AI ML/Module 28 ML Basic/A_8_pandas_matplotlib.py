"""  
Week 08 : AI and ML 
Week begin: 191122, Saturday 
Module 28 : ML Basic 
Watch Date: 241122, Thursday, 09.00 am
"""
from ensurepip import version
import pandas 
import matplotlib.pyplot as plt 
path = 'C:/Users/iamhr/Module Codes/S2 C4 OOP PY/Week 08 AI ML/Module 28 ML Basic/iphone_version_price.csv'
data = pandas.read_csv(path)
# print(data)
# # shape prints how many row and column has in a file 
# print(data.shape)   
# print(data['version'])
# print(data['price'])

# scatter chart 
# it takes x axis and y axis 
plt.scatter(data['version'], data['price'])
plt.show()
# plt.bar(data['version'], data['price'])
# plt.show()