# Aim: To create a python program to import functions as modules

# Algorithm: 
# Step 1: Start
# Step 2: Create example module script files
# Step 3: Define relevant functions
# Step 4: Create main script files
# Step 5: Declare necessary variables
# Step 6: Import example module file
# Step 7: Print the output
# Step 8: Stop

# Program

#expt.py
import example

ans = example.add(4,5)
print("Result: ", ans)

#example.py
def add(a,b):
    result = a+b
    return result

# Output
# Result: 9