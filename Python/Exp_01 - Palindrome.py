# Python Program to find whether the given number is palindrome or not?

# Take the value of the integer and store in a variable.
# Transfer the value of the integer into another temporary variable.
# Using a while loop, get each digit of the number and store the reversed number in another variable.
# Check if the reverse of the number is equal to the one in the temporary variable.
# Print the final result.
# Exit.

num=input()
if num[0:]==num[::-1]:
    print('{} is a palindrome number'.format(int(num)))


# Input: 121
# Output: 121 is a palindrome number
