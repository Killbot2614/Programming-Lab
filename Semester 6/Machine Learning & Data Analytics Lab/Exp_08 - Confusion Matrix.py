# Aim
# To create a python program to evaluate the results of machine learning

# Algorithm
# 1.Read actual values vs predicted values
# 2.Iterate through each element i in y
# 3.Compute the values of accuracy
# 4.Print the following: Confusion Matrix, Accuracy, Specificity, Sensitivity, Precision, Recall, Misclassification Error

# Program
y=['0','1','0','1','1','1','0','1','0','1','0','0','0','1','1','1','0','1','1','0']
y_pred = ['0','0','0','0','1','0','1','1','1','1','0','0','0','0','0','1','0','1','1','0']
print (y)
print(y_pred)

j=0
TP,TN,FP,FN = 0,0,0,0
for i in y:
  if i == '1' and y_pred[j] =='1':
    TP +=1
  elif i == '0' and y_pred[j] =='0':
    TN +=1
  elif i == '1' and y_pred[j] =='0':
    FP +=1
  elif i == '0' and y_pred[j] =='1':
    FN+=1
  j+=1
confusion_matrix = [TP,TN,FP,FN]
print ("Confusion Matrix : ", confusion_matrix)
ACC = (TP+TN) / (TP+FP+TN+FN)
print ("ACCURACY : ", ACC)
PREC = TP / (TP+FP)
print ("PRECISION : ", PREC)
REC = TP / (TP+FN)
print ("RECALL : ", REC)
SN = TP/ (TP+FN)
print ("SENSITIVITY : ", SN)
SP = TN/ (TN+FP)
print ("SPECIFICITY : ", SP)
MCE = 1-ACC
print ("MISCLASSIFICATION ERROR : ", MCE)


# Output
# Confusion Matrix :  [6, 7, 5, 2]
# ACCURACY :  0.65
# PRECISION :  0.5454545454545454
# RECALL :  0.75
# SENSITIVITY :  0.75
# SPECIFICITY :  0.5833333333333334
# MISCLASSIFICATION ERROR :  0.35