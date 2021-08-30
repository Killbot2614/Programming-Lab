# Factorial program with memoization using decorators.

# Memoization is a technique of recording the intermediate results so that it can be used to avoid repeated calculations and speed up the programs.
# memoization can be done with the help of function decorators.

def Memoize(func):
    history={}
    def wrapper(*args):
        if args not in history:
            history[args]=func(*args)
        return history[args]
    return wrapper
    
def factorial(n):
    if type(n)!=int:
        raise ValueError("passed value is not integer")
    if(n<0):
        raise ValueError("number cant be negative passed value{}".format(n))
    if n==0 or n==1:
        return 1
    fact=n*factorial(n-1)
    return fact
print(format(factorial(5)))    

# Input : 5

# Output : 120