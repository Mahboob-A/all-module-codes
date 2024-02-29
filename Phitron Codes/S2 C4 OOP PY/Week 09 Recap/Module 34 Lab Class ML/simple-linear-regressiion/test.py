'''
Py week 09: 
Lab class 09 
Module date: 301122, Wednesday | Simple Linear Regression 
34-4: Test Model 
Watch date: 051222, Monday, 02.30 pm 
34-1 is about uml diagram 
from 34-2 to 34-6 is about simple linear regression 
'''

import pandas as pd 
from json import loads
from math import pow 
import matplotlib.pyplot as plt 

data = pd.read_csv("./dataset/salaryExp.csv")
headers = data.columns.values
X = data[headers[0]]  # years of experience values 
Y = data[headers[1]]  # salary values 

# taking only the last 100 data for testing 
X = X.truncate(4900, 5001)
Y = Y.truncate(4900, 5001)


with open("./trained-data/trained_data.txt", "r") as file:
        data = file.read()
        # print(type(data))  type: str type dict it is now in json type data 
        converted_data = loads(data)
        # print(type(converted_data))   type : dict 

# getting the m and c form json 
m = converted_data["m"]
c = converted_data.get("c")
Y_mean = converted_data["Y_mean"]

# now we need to implement the formula => y = mx + c 
Y_predicted_list = []
# getting r squared value to calculate accuracy 
# for summation
r_upper = 0  
r_lower = 0  
for indx in range(len(X)): 
        # print(X[i+4900])   # X[i+4900] adding 4900 because the index starts from 4900+i here 
        Y_predicted = (m*X[indx+4900]) + c # the formula 
        Y_predicted_list.append(Y_predicted)
        r_upper += pow((Y[indx+4900] - Y_predicted), 2)  # for r squared value 
        r_lower += pow((Y[indx+4900] - Y_mean), 2)     # for r squared value

r_squared = 1 - (r_upper / r_lower)        


# plotting the original and predicted data 
# plt.scatter(X, Y, color="g")   # original data, x as years of experience, y as salary  
# plt.plot(X, Y_predicted_list, color="r")  # predicted data, x as years of experience, Y_predicted_data as predicted salary 
# plt.show()

print(f"Accuracy of model: {r_squared}")



