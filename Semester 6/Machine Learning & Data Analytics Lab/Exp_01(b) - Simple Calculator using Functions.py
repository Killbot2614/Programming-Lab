# EXP 1(f): Basic Programming Examples - Calculator using Library Functions

# Aim: To create a python program for a simple calculator using library functions

# Algorithm:
# Step 1: Start
# Step 2: Get input from the user (choice corresponding to various operations like addition, subtraction, multiplication, division)
# Step 3: Get 2 integer inputs from the user
# Step 4: Perform the operations based on the user's choice
# Step 5: Print the output
# Step 6: Stop

# Program
import numpy

print("Select an operation: ")
print("1.Add")
print("2.Subtract")
print("3.Multiply")
print("4.Divide")

choice = input()

num1=int(input("Enter the first number: "))
num2=int(input("Enter the second number: "))

if choice == '1':
    print(numpy.add(num1, num2))
elif choice == '2':
    print(numpy.subtract(num1, num2))
elif choice == '3':
    print(numpy.multiply(num1, num2))
elif choice == '4':
    print(numpy.divide(num1, num2))
else:
    print("Invalid Input")

# Output
# Select an operation: 
# 1.Add
# 2.Subtract
# 3.Multiply
# 4.Divide
# 1
# Enter the first number: 5
# Enter the second number: 8
# 13

