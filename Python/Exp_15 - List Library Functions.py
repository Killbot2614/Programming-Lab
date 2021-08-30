#  Python program to sort() , reverse() ,copy(),list(),count(),index()method, keyword reverse = True, key = function,+ operator in list Library Function.

"""
1.sort() method that will sort the list alphanumerically, ascending, by default
2.reverse() method reverses the current sorting order of the elements
3.Make a copy of a list with the copy() method
4.Make a copy of a list with the list() method
5.The count() the method returns the number of times a specified value appears in the tuple.
6.The index() the method finds the first occurrence of the specified value.
   The index() the method raises an exception if the value is not found.
7.sort descending, use the keyword argument reverse = True
8.Customize your own function by using the keyword argument key = function
9.To join two or more tuples you can use the + operator
10.If you want to multiply the content of a tuple a given number of times, you can use the * operator
"""

list1=["orange", "mango", "kiwi", "pineapple", "banana"]
list1.sort()
print(list1)

list2=["banana", "Orange", "Kiwi", "cherry"]
list2.reverse()
print(list2)

list3=["apple", "banana", "cherry"]
list3.copy()
print(list3)

print(list3)

list4=['1', '3', '7', '8', '7', '5', '4', '6', '8', '5']
c=list4.count('8')
print(c)
c=list4.index('8')
print(c)

list5=["orange", "mango", "kiwi", "pineapple", "banana"]
print(sorted(list5,reverse=True))
def myfunc(n):
    return abs(n-50)

list6=[100, 50, 65, 82, 23]
list6.sort(key=myfunc)
print(list6)

tuple1=("a", "b" , "c")
tuple2=(1,2,3)
t=tuple1+tuple2
print(t)

list7=("apple", "banana", "cherry")
l=list7*2
print(l)

# Input: 

# 1.["orange", "mango", "kiwi", "pineapple", "banana"]
# 2.["banana", "Orange", "Kiwi", "cherry"]
# 3.["apple", "banana", "cherry"]
# 4.["apple", "banana", "cherry"]
# 5.(1, 3, 7, 8, 7, 5, 4, 6, 8, 5)
# 6.(1, 3, 7, 8, 7, 5, 4, 6, 8, 5)
# 7.["orange", "mango", "kiwi", "pineapple", "banana"]
# 8.[100, 50, 65, 82, 23]
# 9.tuple1 = ("a", "b" , "c")
#   tuple2 = (1, 2, 3)
# 10.("apple", "banana", "cherry")

# Output: 

# ['banana', 'kiwi', 'mango', 'orange', 'pineapple']
# ['cherry', 'Kiwi', 'Orange', 'banana']
# ['apple', 'banana', 'cherry']
# ['apple', 'banana', 'cherry']
# 2
# 3
# ['pineapple', 'orange', 'mango', 'kiwi', 'banana']
# [50, 65, 23, 82, 100]
# ('a', 'b', 'c', 1, 2, 3)
# ('apple', 'banana', 'cherry', 'apple', 'banana', 'cherry')

