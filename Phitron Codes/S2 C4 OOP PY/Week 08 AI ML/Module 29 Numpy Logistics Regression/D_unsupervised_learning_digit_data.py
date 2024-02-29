"""  
Py week 08: ML 
Module 29: Numpy and Logistics Regression 
Mod date: 201122, Sunday
Watch date: 241122, Thursday, 08.30 pm 
29-4 Introduction to Unsupervised Learning with digit data
"""
# load_digits is a data_set of digits 
from sklearn.datasets import load_digits
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split
from sklearn.metrics import confusion_matrix
from sklearn.metrics import plot_confusion_matrix
import matplotlib.pyplot as plt 

digits = load_digits()
# print(digits.data.shape)
# plt.gray()  # it changes the ui color of the image to gray 
# print(digits.data[0]) # it prints the 8*8 2d array's each pixel's color number | 8*8 pixel each digit 
# print(dir(digits))
for digit in range(0, 5):
        # plt.matshow(digits.images[digit])
        # plt.show()
        pass 

# print(dir(digits.target))
# print(digits.target)
# print(dir(digits.data))

# digits.data is the data that we want our machine to train with 
# digits.target is the data that we want to compare the outcome of digits.data 
X = digits.data 
Y = digits.target

# ###training the data 
# X_train is the data that we are feeding the machine, i.e we are allowing these data to the machine to learn form it.
# X_text is the data that we will compare our data with 
# test_size=0.2 means that we are allowing  this percent of data for test, the rest is for fit i.e feeding to the machine 
X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size=0.2)  

# print(X_train.shape)
# print(X_test.shape)
# print(Y_train.shape)
# print(Y_test.shape)

# feeding the data 
model = LogisticRegression()
model.fit(X_train, Y_train)

# predicting the model with data 
predict_result = model.predict([digits.data[1700]])

print("Target value:  ", digits.target[1700])  # this will print the actial data 
print("Predict value:  ", predict_result)  # this will print the predicted data 

# checking the accuracy of the model 
model_accuracy = model.score(X_test, Y_test)  # checking the accuracy with test data 
print("Model accuracy:  ", model_accuracy)


print()
# confusion matrix 
# confusion matrix shows in which places our model did not work or failed to predict 
all_predicted = model.predict(X_test)
confusion_data = confusion_matrix(Y_test, all_predicted)
# print(confusion_data)

# plotting the data using matplotlib 
plot_confusion_matrix(model, X_test, Y_test)
plt.show()