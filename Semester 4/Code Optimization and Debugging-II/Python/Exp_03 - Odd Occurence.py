# 3.Python program to find the number occurring odd number of times?

# Pass these test cases.
# 1) Input: 10,20,30,40,10,20,30 
# 2)Input:1,4,7,2,4,7,1,2,7

def oddOccurrence(arr, arr_size):
      
    for i in range(0, arr_size):
        x = 0
        for j in range(0, arr_size):
            x += 1 if arr[i] == arr[j] else 0
              
        if (x % 2 != 0):
            return arr[i]
          
    return 0

arr = list(input().split())
n = len(arr)
print(oddOccurrence(arr, n))

# (1) 
# Input: 10 20 30 40 10 20 30
# Output: 40
   
# (2)
# Input: 1 4 7 2 4 7 1 2 7
# Output:7