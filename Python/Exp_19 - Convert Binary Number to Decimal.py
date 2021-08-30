# Python program to convert a binary number to decimal number.

'''
From decimal to binary
Input : 8
Output : 1 0 0 0

From binary to decimal
Input : 100
Output : 4
Keep calling conversion function with n/2  till n > 1,
later perform n % 1 to get MSB of converted binary number.  
Example :- 7
1). 7/2 = Quotient = 3(greater than 1), Remainder = 1.
2). 3/2 = Quotient = 1(not greater than 1), Remainder = 1.
3). 1%2 = Remainder = 1.
Therefore, answer is 111.
'''

b_num=list(input(""))
value=0
for i in range(len(b_num)):
    digit=b_num.pop()
    if digit == '1':
        value= value+pow(2,i)
print("Equivalent Decimal Value =",value)

# Input: user input, 11110110

# Output: Equivalent Decimal Value = 246


