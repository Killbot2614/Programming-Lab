// Write a java program to implement operations of Queue using Singly Linked List

import java.util.*;

class Node
{
    int key;
    Node next;
    
    public Node(int key)
    {
        this.key = key;
        this.next = null;
    }
}

class Queue
{
    Node front, rear;
    public Queue()
    {
        this.front = this.rear = null;
    }
    void enqueue(int key)
    {
        Node temp = new Node(key);
        if(this.rear == null)
        {
            this.front = this.rear = temp;
            return;
        }
        this.rear.next=temp;
        this.rear = temp;
    }
    
    void dequeue()
    {
        if (this.front == null)
        {
            return;
        }
        Node temp = this.front;
        this.front = this.front.next;
        
        if (this.front == null)
        {
            this.rear = null;
        }
    }
    
    void display()
    {
        Node temp;
        if(this.front == null && this.rear == null)
        {
            return;
        }
        else
        {
            temp = this.front;
            while(temp != null)
            {
                System.out.print(temp.key+"->");
                temp = temp.next;
            }
            System.out.println("Null");
        }
    }
}

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int d = sc.nextInt();
        Queue q = new Queue();
        q.enqueue(a);
        q.enqueue(b);
        q.enqueue(c);
        q.enqueue(d);
        q.display();
        System.out.println("Element at Front : " + q.front.key);
        q.dequeue();
        System.out.println("After invoking Dequeue Operation");
        q.display();
    }
}

/* (1)
    Input: 10
           20
           30
           40
		   
    Output: 10->20->30->40->Null
            Element at Front : 10
            After invoking Dequeue Operation
            20->30->40->Null
			
	(2)
    Input: 11
           22
           33
           44
		   
    Output: 11->22->33->44->Null
            Element at Front : 11
            After invoking Dequeue Operation
            22->33->44->Null
*/