#  Python Program to Check If a number is Prime or Not.

# A number is said to be prime if it is only divisible by 1 and itself.
# Step 1: Take the input from User
# Step 2: Check whether the number is greater than 1, if not than the number is not Prime
# Step 3: Check if the number gets evenly divided by any number from 2 to half of the number
# Step 4: Print the result

num=2
if num>1:
    for i in range(2, num):
        if (num % i) == 0:
            print('{} is not a prime number'.format(num))
            break
    else:
        print('{} is a Prime number'.format(num))
else:
    print(num, "is not a prime number")

# Input: Enter The Number 2

# Output: 2 is a Prime number
