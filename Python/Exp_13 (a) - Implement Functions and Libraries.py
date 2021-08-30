#  Implement Built In Function and Libraries using python.

# tri_recursion() is a function that we have defined to call itself ("recurse"). We use the k variable as the data, which decrements (-1) every time we recurse. The recursion ends when the condition is not greater than 0 (i.e. when it is 0).

def tri_recursion(k):
    if(k>0):
        result=k+tri_recursion(k-1)
        print(result)
    else:
        result=0
    return result

print("Recursive Example Results")
tri_recursion(6)

# Input: 6

# Output: 
"""
Recursion Example Results
1
3
6
10
15
21
"""