# Bubble Sort in Python

# Bubble sort is an algorithm that compares the adjacent elements and swaps #their positions if they are not in the intended order. The order can be  ascending or descending. 
# i.                    Input an array
# ii.                  Starting with the first element(index = 0), compare the current element with the next element of the array.
# iii.                If the current element is greater than the next element of the array, swap them.
# iv.               If the current element is less than the next element, move to the next element. Repeat  the  Step 1.

def bubbleSort(arr):
    n = len(arr)
    for i in range(n - 1):
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1] :
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

arr = [20, 50, 40, 30, 10]

bubbleSort(arr)
print(' '.join(map(str,arr)))

# Input: 20 50 40 30 10
# Output: 10 20 30 40 50