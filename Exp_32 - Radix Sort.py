# Python Program for Radix Sort

# 1) Do the following for each digit i where i varies from the least significant digit to the most significant digit. 
# Sort input array using counting sort (or any stable sort) according to the i\’th digit. 

def sort(arr, exp1): 
    n = len(arr) 
    output = [0] * (n) 
    count = [0] * (10) 

    for i in range(0, n): 
        index = (arr[i] / exp1) 
        count[int((index) % 10)] += 1

    for i in range(1, 10): 
        count[i] += count[i - 1] 

    i = n - 1
    
    while i >= 0: 
        index = (arr[i] / exp1) 
        output[count[int((index) % 10)] - 1] = arr[i] 
        count[int((index) % 10)] -= 1
        i -= 1

    i = 0
    
    for i in range(0, len(arr)): 
        arr[i] = output[i] 
  
def radixSort(arr):
    max1 = max(arr)
    exp2 = 1
    
    while max1 / exp2 > 0:
        sort(arr, exp2)
        exp2 *= 10
 
arr = [170, 45, 75, 90, 802, 24, 2, 66]
radixSort(arr)

for i in range(len(arr)):
    print(arr[i])

# Input: [ 170, 45, 75, 90, 802, 24, 2, 66]
# Output: 2
#         24
#         45
#         66
#         75
#         90
#         170
#         802