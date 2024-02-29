"""  
Week 08 : AI and ML 
Week begin: 191122, Saturday 
Module 28 : ML Basic 
Watch Date: 241122, Thursday, 11.00 am
"""

from pandas import read_csv
from sklearn.linear_model import LinearRegression

path = 'C:/Users/iamhr/Module Codes/S2 C4 OOP PY/Week 08 AI ML/Module 28 ML Basic/iphone_version_price.csv'

data = read_csv(path)

# print(data.shape)

model = LinearRegression()
model.fit(data[['version']], data[['price']])

model_num = 80
predicted_price = model.predict([[model_num]])
print(predicted_price)