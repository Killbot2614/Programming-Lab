#  Python program to find the gcd of two numbers

# Step 1:Get 2 integer inputs from the user
# Step 2:Next, use decision-making statements or use recursion to check if both the given numbers are divisible by any number (i) without leaving any remainder.
# Step 3:If true, then GCD = i
# Step 4:Print the GCD of the two numbers
# Step 5:End of the program

def hcf(a,b):
    if(b==0):
        return a
    else:
        return hcf(b,a%b)
a=60
b=48
print("The gcd of 60 and 48 is : ",end="")
print(hcf(60,48))

# Input :
# Enter two numbers
# 60
# 48

# Output :
# The gcd of 60 and 48 is : 12
