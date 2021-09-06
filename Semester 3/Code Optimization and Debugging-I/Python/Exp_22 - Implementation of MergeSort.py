# Python program for implementation of MergeSort(Implement Divide and conquer)

# MergeSort(arr[], l,  r)
# If r > l
#      1. Find the middle point to divide the array into two halves:  
#              middle m = l+ (r-l)/2
#      2. Call mergeSort for first half:   
#              Call mergeSort(arr, l, m)
#      3. Call mergeSort for second half:
#              Call mergeSort(arr, m+1, r)
#      4. Merge the two halves sorted in step 2 and 3:
#             Call merge(arr, l, m, r)

def mergeSort(arr):

    if len(arr) > 1:
        mid = len(arr)//2
        L = arr[:mid]
        R = arr[mid:]
        mergeSort(L)
        mergeSort(R)
        i = j = k = 0

        while i < len(L) and j < len(R):
            if L[i] < R[j]:
                arr[k] = L[i]
                i += 1

            else:
                arr[k] = R[j]
                j += 1
            k += 1

        while i < len(L):
            arr[k] = L[i]
            i += 1
            k += 1

        while j < len(R):
            arr[k] = R[j]
            j += 1
            k += 1
            
def printList(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()

if __name__ == '__main__':                                       

    arr = [12, 11, 13, 5, 6, 7]
    print("Given array is", end="\n")
    printList(arr)
    mergeSort(arr)
    print("Sorted array is: ", end="\n")
    printList(arr)


# Input: 
# Given array is
# 12 11 13 5 6 7

# Output:
# Given array is
# 12 11 13 5 6 7
# Sorted array is: 
# 5 6 7 11 12 13 
