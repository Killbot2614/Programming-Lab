# Python3 program to perform basic timSort

# Tim Sort is a sorting algorithm based on Insertion Sort and Merge Sort.

# A stable sorting algorithm works in O(n Log n) time
# Used in Java’s Arrays.sort() as well as Python’s sorted() and sort().
# First sort small pieces using Insertion Sort, then merges the pieces using merge of merge sort.

MINIMUM = 32

def find_minrun(n):
    r=0
    while n>=MINIMUM:
        r |=n&1
        n>>=1
    return n+r
    
def insertion_sort(array,left,right):
    for i in range(left+1,right+1):
        element=array[i]
        j=i-1
        while element<array[j] and j>=left:
            array[j+1]=array[j]
            j-=1
        array[j+1]=element
    return array  
    
def merge(array,l,m,r):
    array_length1=m=l+1
    array_length2=r-m
    left=[]
    right=[]
    for i in range(0,array_length1):
        left.append(array[l+i])
    for i in range(0,array_length2):
        right.append(array[m+1+i])
        
    i=0
    j=0
    k=l
    
    while j<array_length2 and i<array_length1:
        if left[i]<=right[j]:
            array[k]=left[i]
            i+=1
        else:
            array[k]=right[j]
            j+=1
        k+=1
    while i<array_length1:
        array[k]=left[i]
        k+=1
        i+=1
    while j<array_length2:
        array[k]=right[j]
        k+=1
        j+=1
        
def tim_sort(array):
    n= len(array)
    minrun=find_minrun(n)
    
    for start in range(0,n,minrun):
        end=min(start+minrun-1,n-1)
        insertion_sort(array,start,end)
    size=minrun
    while size<n:
        for left in range(0,n,2*size):
            mid=min(n-1,left+size-1)
            right=min((left+2*size-1),(n-1))
            merge(array,left,mid,right)
        size=2*size

array=[-2,7,15,-14,0,15,0,7,-7,-4,-13,5,8,-14,12]

print("Given Array is")
print(array)

tim_sort(array)

print("After Sorting Array is")
print(array)

# Input : 
# Given Array is
# -2, 7, 15, -14, 0, 15, 0, 7, -7, -4, -13, 5, 8, -14, 12

# Output :
# Given Array is
# [-2, 7, 15, -14, 0, 15, 0, 7, -7, -4, -13, 5, 8, -14, 12]
# After Sorting Array is
# [-14, -14, -13, -7, -4, -2, 0, 0, 5, 7, 7, 8, 12, 15, 15]

