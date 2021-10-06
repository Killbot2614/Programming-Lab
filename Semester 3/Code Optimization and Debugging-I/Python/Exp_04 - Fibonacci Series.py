# Python Program to print the Fibonacci Series.

# Step 1:Input the 'n' value until which the Fibonacci series has to be generated
# Step 2:Initialize sum = 0, a = 0, b = 1 and count = 1
# Step 3:while (count <= n)
# Step 4:print sum
# Step 5:Increment the count variable
# Step 6:swap a and b
# Step 7:sum = a + b
# Step 8:while (count > n)
# Step 9:End the algorithm
# Step 10:Else
# Step 11:Repeat from steps 4 to 7

n = input("")
a, b = 0, 1
count = 1
print(a, end = " ")
print(b, end = " ")
while (int(n) > count + 1):
    sum = a + b
    print(sum, end = " ")
    a, b = b, sum
    count += 1

# Input: 5
# Output: 0 1 1 2 3
