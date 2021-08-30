#  Python program to sort the elements of list in ascending order

# STEP 1: Declare and initialize an array.
# STEP 2: Loop through the array and select an element.
# STEP 3: The inner loop will be used to compare the selected element from the outer loop with the rest of the elements of the array.
# STEP 4: If any element is less than the selected element then swap the values.
# STEP 5: Continue this process until the entire array is sorted in ascending order.

arr=[5,2,8,7,1]
temp=0
for i in range(0,len(arr)-1):
    for j in range(0,len(arr)-i-1):
     if(arr[j]>arr[j+1]):
         temp=arr[j]
         arr[j]=arr[j+1]
         arr[j+1]=temp
for i in range(0,len(arr)):
    print(arr[i],end=" ")

# Input: 5 2 8 7 1
# Output: 1 2 5 7 8
