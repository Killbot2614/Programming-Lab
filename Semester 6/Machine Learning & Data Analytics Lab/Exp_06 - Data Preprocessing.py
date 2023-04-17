# Aim
# To create a python program for data preprocessing

# Algorithm
# 1. Describe the dataset
# 2. In the given dataset, count the rows that are having no value from each column
# 3. Replace the value 0 with NaN
# 4. Remove the rows with the missing values
# 5. Impute the missing data with the mean values
# 6. Split the dataset into training and testing sets

# Program
import pandas as pd
df = pd.read_csv("Heart.csv")
df
df.describe()
df.info()
df.replace(0,'NAN')
df.dropna()
df.fillna(df.mean(numeric_only=True))
x=df.iloc[:,0:14].values
x
y=df.iloc[:,14].values
y
from sklearn.model_selection import train_test_split
x_train,x_test,y_train,y_test = train_test_split(x,y,test_size = 0.2, random_state=0)
print (x_train.shape)
print (x_test.shape)
print(df)

# Output
# [303 rows x 15 columns]