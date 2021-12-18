# 1.Python Program to find whether the given number is palindrome or not?

# Find whether palindrome or not for the given input

n = "1001"
print('{} is a palindrome'.format(int(n))) if n[0:] == n[::-1] else print('{} is not a palindrome'.format(int(n)))

# Input: 1001
# Output: 1001 is a palindrome
