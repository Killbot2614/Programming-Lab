# Python Program for Selection Sort

# Eg:
# n = 7
# Array Elements = {70, 50, 30, 10, 60, 40, 20}
# Sorted Array = {10, 20, 30, 40, 50, 60, 60, 70}

def swap(i, j, nArr):
    if i!=j:     
        temp = nArr[j]
        nArr[j] = nArr[i]
        nArr[i] = temp
 
def T1(nArr):    
    for i in range(0, len(nArr)):
        small = i
        for j in range(i+1, len(nArr)):
            if nArr[j] < nArr[small]:
                small = j
        swap(i, small, nArr)

T2 = input()
nArr = input().split()
T1(nArr)
print(' '.join(nArr))

# (1)
# Input: 7
#        70 50 30 10 60 40 20
# Output: 10 20 30 40 50 60 70

# (2)
# Input: 6
#        66 44 22 55 11 33
# Output: 11 22 33 44 55 66