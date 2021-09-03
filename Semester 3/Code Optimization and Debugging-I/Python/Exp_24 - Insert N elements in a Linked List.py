# Python program to insert N elements in a Linked List one after other at middle position

# Number of elements present in the list are less than 2.
# Number of elements present in the list are more than 2. 
# The number of elements already present are even say N then the new element is inserted in the middle position that is (N / 2) + 1.
# The number of elements already present are odd then the new element is inserted next to the current middle element that is (N / 2) + 2.

class Node:
    def __init__(self):
        self.value=0
        self.next=None
        
class LinkedList:
    def __init__(self):
        self.head=None
        self.mid=None
        self.count=0
        
    def insertAtMiddle(self,n):
        temp=Node()
        temp1=None
        
        temp.next = None
        temp.value=n
        
        if(self.count<2):
            if(self.head==None):
                self.head=temp
            else:
         
                temp1 = self.head
                temp1.next = temp
         
            self.count = self.count + 1
            self.mid = self.head
        else:
     
            temp.next = self.mid.next
            self.mid.next = temp
            self.count = self.count + 1
            if (self.count % 2 != 0):
                self.mid = self.mid.next

    def show(self):
        temp = None
 
        temp = self.head

        while (temp != None) :
            print( temp.value, end = " -> ")
            temp = temp.next
        print( "NULL")

arr = [ 1, 2, 3, 4, 5]
n = len(arr)
 
L1 = LinkedList()
for i in range(n):
    L1.insertAtMiddle(arr[i])
L1.show()

# Input :
# [ 1, 2, 3, 4, 5]

# Output :
# 1 -> 3 -> 5 -> 4 -> 2 -> NULL

