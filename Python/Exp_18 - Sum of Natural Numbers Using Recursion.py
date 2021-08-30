#  Python Program to Find Sum of Natural Numbers Using Recursion

# The user enters the Nth number as the input, the program then calculates the sum of first N numbers using recursion and then displays the final result.
# Example 1: Let n = 5
# Therefore, the sum of the first 5 natural numbers = 1 + 2 + 3 + 4 + 5 = 15.
# Thus, the output is 15

def sum(n):
    if n==0:
        return 0
    else:
        return n+sum(n-1)
arr=[x for x in input().split()]
number=int(arr[len(arr)-1])
if number>=0:
    print("The sum is ", sum(number))
else:
    print("Natural number begins from 1")

# Input: 
# Enter the number:  25
# Enter the number:  -12

# Output:
# The sum is  325
# Natural number begins from 1
