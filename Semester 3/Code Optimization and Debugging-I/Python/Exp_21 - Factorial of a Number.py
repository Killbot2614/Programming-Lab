# Python Program for factorial of a number

# Factorial of a non-negative integer, is multiplication of all integers smaller than or equal to n. 
# For example factorial of 6 is 6*5*4*3*2*1 which is 720.

num=int(input())
factorial = 1
if num<0:
    print("Factorial does not exist for negative numbers")
elif num==0:
    print("The factorial of 0 is 1")
else:
    for i in range(1,num+1):
        factorial=factorial*i
    print("Factorial of",num,"is",factorial)


# Input: 5
# Output: Factorial of 5 is 120