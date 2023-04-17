# Aim: To create a python program for a simple calculator without using library functions

# Algorithm: 
# Step 1: Get input from the user (choice corresponding to various operations like addition, subtraction, multiplication, division)
# Step 2: Get 2 integer inputs from the user
# Step 3: Perform the operations based on the user's choice
# Step 4: Print the output
# Step 5: Stop

# Program
def add(a, b):
    return a + b
def sub(a, b):
    return a - b
def mul(a, b):
    return a * b
def div(a, b):
    return a / b
print("""Select an operation: 
1. Add
2. Subtract
3. Multiply
4. Divide""")
choice = input()

num1 = int(input("Enter the first number:"))
num2 = int(input("Enter the second number:"))

if choice == '1':
    print(add(num1, num2))
elif choice == '2':
    print(sub(num1, num2))
elif choice == '3':
    print(mul(num1, num2))
elif choice == '4':
    print(div(num1, num2))
else:
    print("Invalid Input")
    
# Output
# Select an operation: 
# 1. Add
# 2. Subtract
# 3. Multiply
# 4. Divide
# 1
# Enter the first number:5
# Enter the second number:2
# 7

