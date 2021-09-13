# Python Program for ShellSort

# In shellSort, we make the array h-sorted for a large value of h. 
# We keep reducing the value of h until it becomes 1. An array is said to be h-sorted if all sublists of every h\’th element is sorted.

def shellSort(arr, n):
    gap = int(n / 2)
    while gap > 0:
        for i in range(gap, n):
            temp = arr[i]
            j = i
            while j >= gap and arr[j - gap] > temp:
                arr[j] = arr[j - gap]
                j -= gap
            arr[j] = temp
        gap /= 2
        gap = int(gap)

arr = [9, 8, 3, 7, 5, 6, 4, 1]
shellSort(arr, len(arr))

print("Sorted Array in Ascending Order:")
print(arr)

# Input: Array before sorting:
#        9, 8, 3, 7, 5, 6, 4, 1
# Output: Sorted Array in Ascending Order:
#         [1, 3, 4, 5, 6, 7, 8, 9]
