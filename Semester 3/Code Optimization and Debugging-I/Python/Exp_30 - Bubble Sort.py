# Python program for implementation of heap Sort

# Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.

def bubbleSort(arr):
    n = len(arr)
    for i in range(n - 1):
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1] :
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

arr = [-2, 45, 0, 11, -9]

bubbleSort(arr)
print("Sorted Array in Ascending Order:")
print(arr)

# Input: -2, 45, 0, 11, -9
# Output: Sorted Array in Ascending Order:
		  [-9, -2, 0, 11, 45]