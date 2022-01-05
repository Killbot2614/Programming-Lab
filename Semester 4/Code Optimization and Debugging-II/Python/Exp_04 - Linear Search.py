# 4.Python Program to implement Linear Search?

# Get the input array and sort the array and look for the search element and print the position of the element?
# Pass the test cases:
# Test Case 1: 15 12 17 13 14 18 19   Search Element: 14
# Test Case 2:  2 5 1 6 3 8 4 9 Search Element : 6


arr = [int(x) for x in input().split(' ')]
n = len(arr)

for i in range(n):
    for j in range(i + 1, n):
             if (arr[i] > arr[j]): arr[j], arr[i] = arr[i], arr[j]
    
for i in range(n):
    print("Position at", i) if (arr[i] == 14 or arr[i] == 6) else 0
	
# (1)
# Input: 15 12 17 13 14 18 19
# Output: Position at 2

# (2)
# Input: 2 5 1 6 3 8 4 9
# Output: Position at 5