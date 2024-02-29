
'''
Py week 09: 
Lab class 09 
Module date: 301122, Wednesday | Simple Linear Regression 
34-4: Test Model 
Watch date: 051222, Monday, 04.40 pm 
34-1 is about uml diagram 
from 34-2 to 34-6 is about simple linear regression 
'''

# take and input and show predicted ecpected salary 

from json import loads

with open("./trained-data/trained_data.txt") as file:
        data = file.read()
        converted_data = loads(data)
        
m = converted_data["m"]
c = converted_data["c"]

inp = int(input("Input years of experience:  "))
# slope(ratio of x and y changes) * x(years of exp) + c (intersection of y coordinate of regression line)
predicted_salary = (m*inp)+c
print(f"Your expected salary is:  {predicted_salary}")
