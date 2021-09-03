#  Python Program for Selection Sort.

"""
1. Create a function selection_sort that takes a list as argument.
2. Inside the function create a loop with a loop variable i that counts from 0 to the length of the list – 1.
3. Create a variable smallest with initial value i.
4. Create an inner loop with a loop variable j that counts from i + 1 up to the length of the list – 1.
5. Inside the inner loop, if the elements at index j is smaller than the element at index smallest, then set smallest equal to j.
6. After the inner loop finishes, swap the elements at indexes i and smallest.
"""
def selection_sort(a):
    for i in range(0,len(a)-1):
        smallest=i
        for j in range(i+1,len(a)):
            if a[j]<a[smallest]:
                smallest=j
        a[i],a[smallest]=a[smallest],a[i]
    print(a)
selection_sort([21,6,9,33,3])

# Input: [21,6,9,33,3]

# Output: [3, 6, 9, 21, 33]

