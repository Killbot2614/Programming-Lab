# 8.Quick Sort in Python

# 1.choose a pivot element
# 2.divide the array in such a way that elements smaller then pivot come before pivot and elements larger then pivot comes later
# 3.Recursively call quick sort on each of smaller sub arrays

import sys

def quicksort(x,y,z):
    if y < z:
        l=partition(x,y,z)
        quicksort(x, y, l - 1)
        quicksort(x, l + 1, z)
        
def partition(x, y, z):
    pivot = x[y]
    start = y
    end = z
    while start < end:
          while start <= z and x[start] <= pivot:
               start += 1
          while x[end] > pivot:
              end -= 1
          if start < end:
              x[start], x[end] = x[end], x[start]
    x[y], x[end] = x[end], x[y]
    return end


x = list(map(int,sys.stdin.readline().split()))
quicksort(x, 0, (len(x) - 1))
for i in x:
    print(i,end = " ")
    
#  (1)
#  Input: 5 2 6 3 9 4
#  Output: 2 3 4 5 6 9
   
#  (2)
#  Input: 9 3 1 10 5 14
#  Output: 1 3 5 9 10 14
