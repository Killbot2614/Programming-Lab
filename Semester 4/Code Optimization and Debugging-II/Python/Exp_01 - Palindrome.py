# 1.Python Program to find whether the given number is palindrome or not?

# Find whether palindrome or not for the given input

n = input()
print('{} is a palindrome number'.format(int(n))) if n[0:] == n[::-1] else print('{} is not a palindrome number'.format(int(n)))

# Input: 121
# Output: 121 is a palindrome number