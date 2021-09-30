// Write a java program to implement the operations of Stack using Singly Linked List

import static java.lang.System.exit;
import java.util.*;

class LinkedList {
    private class Node {
        int data;
        Node link;
    }

    Node top;

    LinkedList()
    {
        this.top = null;
    }
 
    public void push(int x)
    {
        Node temp = new Node();
        if (temp == null) {
            System.out.print("Heap Overflow");
            return;
        }

        temp.data = x;
        temp.link = top;
        top = temp;
    }
    
    public boolean isEmpty()
    {
        return top == null;
    }
    
    public int peak()
    {
        if (!isEmpty()) {
            return top.data;
        }
        else {
            System.out.println("Stack is empty");
            return -1;
        }
    }
    
    public void pop()
    {
        if (top == null) {
            System.out.print("Stack Underflow");
            return;
        }
        top = (top).link;
    }
 
    public void display()
    {
        if (top == null) {
            System.out.printf("Stack Underflow");
            exit(1);
        } else {
            Node temp = top;
            while (temp != null) {
                System.out.printf("%d->", temp.data);
                temp = temp.link;
            }
            System.out.println("Null");
        }
    }
}

public class Main {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int d = sc.nextInt();
        
        LinkedList obj = new LinkedList();
        obj.push(a);
        obj.push(b);
        obj.push(c);
        obj.push(d);
        obj.display();
 
        System.out.printf("Top element in Stack is : %d\n", obj.peak());
        obj.pop();
 
        System.out.println("After Invoking Pop Operation");
        obj.display();
    }
}

/*  (1)
    Input: 1
           2
           3
           4
		   
    Output: 4->3->2->1->Null
            Top element in Stack is : 4
            After Invoking Pop Operation
            3->2->1->Null
			
    (2)
    Input: 11
           22
           33
           44
		   
    Output: 44->33->22->11->Null
            Top element in Stack is : 44
            After Invoking Pop Operation
            33->22->11->Null
*/
