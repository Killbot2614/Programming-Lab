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

n=int(input(""))
a=0
b=1
sum=0
count=1
print(end="")
while(count<=n):
    print(sum,end=" ")
    count+=1
    a=b
    b=sum
    sum=a+b


# Input: 5
# Output: 0 1 1 2 3
