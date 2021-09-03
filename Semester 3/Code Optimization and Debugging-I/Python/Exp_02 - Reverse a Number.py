# Python program to reverse a number using recursive function.

# Input:  num
# (1) Initialize rev_num = 0
# (2) Loop while num > 0
#     (a) Multiply rev_num by 10 and add remainder of num  
#          divide by 10 to rev_num
#               rev_num = rev_num*10 + num%10;
#     (b) Divide num by 10
# (3) Return rev_num

num=int(input())
revnum=0

while num>0:
    
    rem=num%10
    revnum=revnum*10+rem
    num=num//10

print(revnum)

# Input: 4562
# Output: 2654
