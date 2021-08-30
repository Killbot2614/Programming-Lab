#  Python Program to Check Prime Number.

# START
#   Step 1 → Take integer variable A
#   Step 2 → Divide the variable A with (A-1 to 2)
#   Step 3 → If A is divisible by any value (A-1 to 2) it is not prime
#   Step 4 → Else it is prime
# STOP

num=int(input())
if num>1:
    for i in range(2, num):
        if (num % i) == 0:
            print('{} is not a prime number'.format(num))
            break
    else:
        print('{} is a prime number'.format(num))
else:
    print(num, "is not a prime number")

# Input : 11

# Output : 11 is a prime number
