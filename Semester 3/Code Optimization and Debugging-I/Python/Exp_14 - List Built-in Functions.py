# Python program to Range of Indexes,list use the in keyword,Range of Item Values,insert() ,append(),extend(),remove(),pop() ,del keyword in List built in function. 

"""
1.When specifying a range, the return value will be a new list with the specified items.
2.Specify negative indexes if you want to start the search from the end of the list
3. determine if a specified item is present in a list use the in keyword
4.insert() method inserts an item at the specified index
5. add an item to the end of the list, use the append() method
6.insert() method inserts an item at the specified index
7.To append elements from another list to the current list, use the extend() method
8.The remove() method removes the specified item
9.The pop() method removes the specified index.
10.The del keyword also removes the specified index
11.The clear() method empties the list
"""

list1=["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
print(list1[2:][:3])
print(list1[3:][:3])

list2=["apple", "banana", "cherry"]
if "apple" in list2:
    print("Yes, 'apple' is in the fruits list")
list2.insert(2,'watermelon')
print(list2)

list3=["apple", "banana", "cherry"]
list3.insert(3,'orange')
print(list3)

list4=["apple", "banana", "cherry"]
list4.insert(1,'orange')
print(list4)

list5=["apple", "banana", "cherry"]
more_list=['mango', 'pineapple', 'papaya']
list5.extend(more_list)
print(list5)

list6=["apple", "banana", "cherry"]
list6.remove('banana')
print(list6)

list7=["apple", "banana", "cherry"]
list7.remove('apple')
print(list7)
list7.clear()
print(list7)

# Input: 

# 1.["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
# 2.["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
# 3.["apple", "banana", "cherry"]
# 4.["apple", "banana", "cherry"]
# 5.["apple", "banana", "cherry"]
# 6.["apple", "banana", "cherry"]
# 7.thislist = ["apple", "banana", "cherry"]
#   tropical = ["mango", "pineapple", "papaya"]
# 8.["apple", "banana", "cherry"]
# 9.["apple", "banana", "cherry"]
# 10.["apple", "banana", "cherry"]

# Output: 

# ['cherry', 'orange', 'kiwi']
# ['orange', 'kiwi', 'melon']
# Yes, 'apple' is in the fruits list
# ['apple', 'banana', 'watermelon', 'cherry']
# ['apple', 'banana', 'cherry', 'orange']
# ['apple', 'orange', 'banana', 'cherry']
# ['apple', 'banana', 'cherry', 'mango', 'pineapple', 'papaya']
# ['apple', 'cherry']
# ['banana', 'cherry']
# []

