# 5.Python Program to find sum of elements using Array

# I.                    Define a function to calculate sum of array elements # using loop
#II.                  Create an array
#III.                Input number of elements and array elements using loop
#IV.                Invoke the function
# No of elements of array: 5
# Enter the array elements: 10 20 30 40 50

def result(arr,n):
    return(sum(arr))

arr = [10, 20, 30, 40, 50]
i = len(arr)
j = result(arr,i)
print (j)

# Input: 10 20 30 40 50
# Output: 150