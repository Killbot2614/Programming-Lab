# Aim: To create a python program to generate Fibonacci series

# Algorithm: 
# Step 1: Input the 'n' value until the Fibonacci series has been generated
# Step 2: Initialize sum = 0, a = 0, b = 1 and count = 1
# Step 3: while (count <= n), print sum
# Step 4: Increment the count variable
# Step 5: Swap a & b
# Step 6: sum = a + b
# Step 7: while(count > n), end algorithm
# Step 8: Else, repeat from steps 3 to 6
# Step 9: Stop

# Program
n=input("Enter an input: ")
a,b=0,1
count=1
print("Fibonacci Series:",a, b, end = "")
while(int(n) > count+1):
    sum = a + b
    print(sum, end="")
    a,b = b, sum
    count += 1

# Output
# Enter an input:5
# Fibonacci Series: 0 1123

