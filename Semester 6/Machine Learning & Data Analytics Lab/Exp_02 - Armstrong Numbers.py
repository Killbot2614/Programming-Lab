# Aim: To create a python program to generate armstrong numbers

# Algorithm: 
# Step 1: Take the numbers as input from the user
# Step 2: Determine the number of digits, say it is n
# Step 3: Extract each digit from the number using a loop. Now raise each of these digits to the power n
# Step 4: Keep adding the nth power of these digits in a variable, say sum
# Step 5: Once the sum of all the nth power of the digits is obtained, the loop terminates. If both are equal, then it is an armstrong number and is printed

# Program
lower = int(input("Enter lower range: "))
upper = int(input("Enter upper range: "))

for num in range(lower, upper + 1):
    sum = 0
    temp = num
    while temp > 0:
        digit = temp % 10
        sum += digit ** 3
        temp //= 10
        if num == sum:
            print(num)

# Output
# Enter lower range: 100
# Enter upper range: 500
# 125
# 153
# 216
# 370
# 371
# 407

