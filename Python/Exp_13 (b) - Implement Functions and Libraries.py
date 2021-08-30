#  Implement Built In Function and Libraries using python.

"""
1.lists can have items with the same value.
2. determine how many items a list has, use the len() function
3.list can contain different data types
4.list() constructor when creating a new list
"""

list1=['apple', 'banana', 'cherry', 'apple', 'cherry']
print(list1)

list2=["apple", "banana", "cherry"]
print(len(list2))

list3=["abc", 34, True, 40, "male"]
print(list3)

list4=list(('apple', 'banana', 'cherry'))
print(list4)

# Input:
""" 
['apple', 'banana', 'cherry', 'apple', 'cherry']
["apple", "banana", "cherry"]
["abc", 34, True, 40, "male"]
['apple', 'banana', 'cherry']
"""

# Output:
"""
['apple', 'banana', 'cherry', 'apple', 'cherry']
3
['abc', 34, True, 40, 'male']
['apple', 'banana', 'cherry']
"""