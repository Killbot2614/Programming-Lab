# Binary Search in Python

# Eg. 
# n = 5
# a[5] = {11,22,33,44,55}
# Key = 44
# 44 is found at the position 3

def binarySearch(arr, x, y, n):
    if y >= x:
        z = (y + x) // 2

        if arr[z] == n:
            return z

        elif arr[z] > n:
            return binarySearch(arr, x, z - 1, n)

        else:
            return binarySearch(arr, z + 1, y, n)
 
    else:
        return 0

arr = [11, 22, 33, 44, 55, 44]
n = 44
 
result = binarySearch(arr, 0, len(arr)-1, n)
 
if result != -1:
    print(n, "is found at the position", str(result))
else:
    0
	
# Input: 11 22 33 44 55 44
# Output: 44 is found at the position 3