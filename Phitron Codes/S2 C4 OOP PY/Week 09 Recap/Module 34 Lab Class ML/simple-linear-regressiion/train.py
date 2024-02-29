'''
Py week 09: 
Lab class 09 
Module date: 301122, Wednesday | Simple Linear Regression 
34-3: Train Model 
Watch date: 051222, Monday, 11.30 am 
34-1 is about uml diagram 
from 34-2 to 34-6 is about simple linear regression 
'''

# we will not use any library to implement simple linear regression
# we will use formula 
# the formula to find regression line is y = mx+c 
# where x = independent data | y = dependent data | m = slope (ratio of if x increases and increase or decrease of y in reaction of x)
# and c = the point where the regression line intersect the y coordinate 



import pandas as pd 
from math import pow
from json import dumps   # to create dict as json | loads => to convert json file into dict 

# func to get mean 
def get_mean(data):
        sum_ = 0 
        for val in data: 
                sum_ += val 
        mean = sum_ / len(data)
        return mean 

# we need to first get the x and y data
# x is years of experience as salary depepnds on years of experience hence it is independent data
# y is salary as salary is dependent on years of experience
data = pd.read_csv('./dataset/salaryExp.csv')

# A. Getting The Values of the Columns as X and Y 
# step 01: # get the headers as list 

# headers = data.columns
# print(headers)  => Index(['Years of Experience', 'Salary'], dtype='object')

# step 02: # pure headers list 
# headers = data.columns.values
# print(headers)  => ['Years of Experience' 'Salary'] we are getting the columns, so we want the values of the columns 

# get x and y values from headers 
headers = data.columns.values
X = data[headers[0]]   # years of experience col values in X 
Y = data[headers[1]]   # salary col values in Y 

# training 4899 data and rest 100 data will be for testing 
X = X.truncate(0, 4899)
Y = Y.truncate(0, 4899)

# getting the mean of X and Y 
X_mean = get_mean(X)
Y_mean = get_mean(Y)

# finding the slope or m 
# m = summation{(x - x_mean) * (y - y_mean) / summation{{ x - x_mean}^2}
#  x or mean each value of x and y and substact mean from them and the * the value then sum the * values 
#  then m = the upper_summation divided by summation of x - x_mean power of 2 

upper_summation = 0 
lower_summation = 0 
for i in range(len(X)):
        upper_summation += (X[i] - X_mean) * (Y[i] - Y_mean)   # as we are getting index in i, so we can access Y's value also with the same index in one for loop 
        lower_summation += pow(X[i]  - X_mean, 2)   # power of 2 

# m is the slope (y = mx+c)  m is the ratio that y will be increased in terms of increase of x  
m = upper_summation / lower_summation

# c is the intersection of regression line with y coordinate (y = mx + c)  | c is the intersect point of regression line in y coordinate 

c = Y_mean - (m*X_mean) 

# making a dict with m and c 
trained_data = {}
# creating key as m and c and storing the respected values 
trained_data['m'] = m
trained_data['c']  = c 
trained_data['Y_mean'] = Y_mean


# saving the trained data 
with open("./trained-data/trained_data.txt", "w") as file:
        file.write(dumps(trained_data))   # we can not write raw dict file,  we need str type to wrote, so converting the dict into json and writing 
print("m and c file calculated and saved successfully! ")





