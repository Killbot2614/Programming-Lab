# Python Program for Insertion Sort

# Eg:
# n = 7 
# Array Elements = {70, 50, 30, 10, 60, 40, 20}
# Sorted Array = {10, 20, 30, 40, 50, 60, 70}

def insertionSort(T1):
    for i in range(1, len(T1)):
        temp = T1[i]
        j = i - 1
        while (j >= 0 and temp < T1[j]):
            T1[j + 1] = T1[j]
            j = j - 1
        T1[j + 1] = temp


# n = int(input()) temporarily
n = 6

T1 = input().split()
T2 = T1
T1 = [int(x) for x in T1]
insertionSort(T1)
for i in range(len(T1)):
   print (T1[i],end=' ')

# (1)
# Input: 7
#        70 50 30 10 60 40 20
# Output: 10 20 30 40 50 60 70
#
# (2)
# Input: 6
#        66 44 22 11 33 55
# Output: 11 22 33 44 55 66
