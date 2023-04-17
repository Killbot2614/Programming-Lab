# Aim
# To create a python program to implement classification algorithm

# Algorithm
# 1.Import required libraries
# 2.Read the dataset
# 3.Split the dataset
# 4.Train the classifier on the training data
# 5.Visualize the confusion matrix using heatmap function

# Program
import pandas as pd
import numpy as np
from math import *
df=pd.DataFrame()
df['refund'] = ['yes','no','no','yes','no','no','yes','no','no','no']
df['marital_status'] = ['single','married','married','single','single','divorced','married','single','single','married']
df['taxable_income'] = [125000,100000,150000,250000,300000,350000,500000,180000,420000,275000]
df['evade'] = ['no','no','no','no','yes','no','no','yes','no','yes']
print(df)
for i in range(len(df)):
  df.loc[i,'taxable_income'] = str(ceil(df.loc[i,'taxable_income']/100000))
df
data = pd.get_dummies(df[df.columns])
data
for i in range(1,4):
  if ('taxable_income'+str(i) not in data.columns):
    data['taxable_income'+str(i)] = [0 for i in range(10)]
x=['no','married',180000]
x[2] = str(ceil(x[2]/100000))
x

# Output
# ['no', 'married', '2']

# Program using Iris.csv
import pandas as pd
data = pd.read_csv("Iris.csv")
x = data.iloc[:,[1,2,3,4]].values
y = data.iloc[:,5].values
from sklearn.model_selection import train_test_split
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.2, random_state=1)
from sklearn.naive_bayes import GaussianNB
gnb=GaussianNB()
gnb.fit(x_train, y_train)
y_pred = gnb.predict(x_test)
from sklearn import metrics
print("Classification Accuracy: ", metrics.accuracy_score(y_test, y_pred)*100)
cm = metrics.confusion_matrix(y_test, y_pred)
print(cm)
import seaborn as sn
from matplotlib import pyplot as plt
plt.figure(figsize = (5,4))
sn.heatmap(cm, annot=True)
plt.xlabel('Predicted value')
plt.ylabel('Actual value')
plt.show()

# Output
# [[11 0 0]
# [0 12 1]
# [0 0 5]]