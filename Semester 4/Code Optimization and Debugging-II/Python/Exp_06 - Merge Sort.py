# 6.Merge Sort in Python

# i.                    Input an array
# ii.                  Divide the array into 2 halves by finding middle element of array m=(l+r)/2
# iii.                Divide the first half of array further until you get single element in array.
# Call mergesort for first half: mergesort(array,l,m)
# iv.               Divide the second half of array further until you get single element in array.
# Call mergesort for secondt half: mergesort(array,m+1,r)
# v.                 Merge the two halves of array recursively by comparing elements of both parts
# i.e) Call merge(array,l,m,r)
# Input:3 7 2 8 5 9

def mergeSort(array):
    if len(array) > 1:
        mid = len(array) // 2
        left = array[:mid]
        right = array[mid:]
        mergeSort(left)
        mergeSort(right)
        i = j = k = 0
        while i < len(left) and j < len(right):
            if left[i] < right[j]:
                array[k] = left[i]
                i += 1
            else:
                array[k] = right[j]
                j += 1
            k += 1
        while i < len(left):
            array[k] = left[i]
            i += 1
            k += 1
        while j < len(right):
            array[k] = right[j]
            j += 1
            k += 1
			
def display(array):
    for i in range(len(array)):
        print(array[i], end = " ")
    print()
	
if __name__ == '__main__':
    array = [3, 7, 2, 8, 5, 9]
    mergeSort(array)
    display(array)
	
# Input: 3 7 2 8 5 9
# Output: 2 3 5 7 8 9