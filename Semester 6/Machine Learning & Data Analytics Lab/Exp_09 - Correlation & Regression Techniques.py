# Aim
# To create a python program to implement correlation and regression techniques

# Algorithm
# 1.Import necessary libraries
# 2.Visualize data using scatter plot
# 3.Calculate partial derivative and cost function
# 4.Print current iteration and values
# 5.Visualize predicted salary vs experience using a scatter and line plot

# Program
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error
import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
experience = np.array([3.4,4.2,5.0,1.6,5.2,2.6,7.2,8.2,6.1,7.3,3.4,8.5,7.4,6.2,6.6])
salary = np.array([3.1,5.7,4.2,2.3,5.3,2.4,7.6,6.4,6.5,7.4,3.5,9.3,8.2,4.6,7.2])
plt.scatter(experience,salary,color='red')
plt.xlabel("Experience")
plt.ylabel("Salary")
plt.show  
a0 = 0
a1 = 0
lr = 0.0001 
iterations = 1000 
error = [] 
for itr in range(iterations):
  error_cost = 0
  cost_a0 = 0
  cost_a1 = 0
  for i in range(len(experience)):
    y_pred = a0+a1*experience[i] 
    error_cost = error_cost + (salary[i]-y_pred)**2
    for j in range(len(experience)):
      partial_wrt_a0 = -2*(salary[j] - (a0 + a1 * experience[j]))
      partial_wrt_a1 = (-2*experience[j]) * (salary[j] - (a0 + a1 * experience[j]))
      cost_a0 = cost_a0 + partial_wrt_a0 
      cost_a1 = cost_a1 + partial_wrt_a1
    a0 = a0 - lr * cost_a0 
    a1 = a1 - lr * cost_a1 
    print (itr,a0,a1)
    error.append (error_cost)
print (a0)
print (a1)
plt.figure(figsize=(10,5))
plt.plot (np.arange(1,len(error)+1),error,color='red',linewidth=5)
plt.title("Iteration Vs Error")
plt.xlabel("Iterations")
plt.ylabel("Error")
pred = a0+a1 * experience
print (pred)
plt.scatter(experience,salary,color='red')
plt.plot(experience,pred,color ='green')
plt.xlabel('experience')
plt.ylabel('salary')
experience = experience.reshape (-1,1)
model = LinearRegression()
model.fit(experience,salary)
salary_pred = model.predict(experience)
Mse = mean_squared_error(salary,salary_pred)
print ("Slope", model.coef_)
print ("Intercept", model.intercept_)
print ("MSE", Mse)


# Output
# Slope [0.94194449]
# Intercept 0.3741867752387451
# MSE 0.7364342954183717