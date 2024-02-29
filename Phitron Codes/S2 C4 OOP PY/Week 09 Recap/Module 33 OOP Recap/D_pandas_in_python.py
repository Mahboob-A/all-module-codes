"""  
Week 09: Recap week 
Module 33: OOP Recap
33-4_ Pandas in Python
Mod date: 291122, Tuesday
Watch date: 041222, Sunday, 08.15 pm
"""
# index_col does not work 
# normal index does not show up 


# Pandas is a module for ml and data analysis


import pandas as pd

# df = pd.read_csv("diabetes.csv")
# print(df.head())  # will print the whole values as table, index will be as 0,1, 2

# index will be the passed header of the csv file
# df = pd.read_csv("diabetes.csv", index_col="Age")  
# print(df.head())

# describe will give mean, max, standard deviation, count of elements. 
# df = pd.read_csv("diabetes.csv")  
# df_head = df.head()
# print(df.describe())

# getting sum of an header 
# df = pd.read_csv("diabetes.csv")  
# df_head = df.head()
# print(df_head.groupby("Pregnancies").sum())

# getting the count of elements 
# df = pd.read_csv("diabetes.csv")  
# df_head = df.head()
# print(df_head["Outcome"].value_counts())

# sorting value of an header or table
# df = pd.read_csv("diabetes.csv")  
# df_head = df.head()

# # # sort_values("Header name", asending type, inplace type)   it can take multiple value just like below example 
# df_head.sort_values("Age", ascending=True, inplace=True)  
# print(df_head)

# df2 = df.sort_values(["Glucose", "Age"], ascending=[True, True], inplace=False)
# print(df2)

# dropna()  = deletes the row that has none vlaue 
# fillna()  = fills with some value to the none value 
# isnull() = check whether ant col value is NaN 

# df = pd.read_csv("diabetes.csv")
# df_head = df.head()
# print(df_head.isnull())
# # print(df_head.dropna())
# print(df_head.fillna(0))

# we can also convert a dict into data frame
dct = [{"name" : "rahim", "age" : 20}, {"name" : "karim", "age" : 21}]
df = pd.DataFrame(dct, index=[0, 1])
print(df)