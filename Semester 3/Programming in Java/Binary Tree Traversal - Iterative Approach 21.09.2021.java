// Write a java program to implement Binary Tree Traversal using Iterative Approach

import java.util.*;

public class Main {
    public void preOrder(Node root) {
        if (root == null) {
            return;
        }
        System.out.print(root.data + " ");
        preOrder(root.left);
        preOrder(root.right);
    }
    
    public void inOrder(Node root) {
        if (root == null) {
            return;
        }
        inOrder(root.left);
        System.out.print(root.data + " ");
        inOrder(root.right);
    }
	
	public void postOrder(Node root) {
        if (root == null) {
            return;
        }
        postOrder(root.left);
        postOrder(root.right);
        System.out.print(root.data + " ");
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int d = sc.nextInt();
        int e = sc.nextInt();
        int f = sc.nextInt();
        int g = sc.nextInt();
		
	Node root = new Node(a);
        root.left = new Node(b);
        root.right = new Node(c);
        root.left.left = new Node(d);
        root.left.right = new Node(e);
        root.right.left = new Node(f);
        root.right.right = new Node(g);
        
        Main treeOrder = new Main();
        
        System.out.print("Preorder:");
        treeOrder.preOrder(root);

        System.out.print("\nInorder:");
        treeOrder.inOrder(root);
        
        System.out.print("\nPostorder:");
        treeOrder.postOrder(root);
    }
}

class Node {
    int data;
    Node left;
    Node right;
    
    public Node(int value) {
        data = value;
        left = right = null;
    }
}

/* Input:20 40 50 60 70 80 90

   (1)
   Output: Preorder:20 40 60 70 50 80 90
           Inorder:60 40 70 20 80 50 90
           Postorder:60 70 40 80 90 50 20
   (2)
   Output: Preorder:1 2 4 5 3 6 7
           Inorder:4 2 5 1 6 3 7
	   Postorder:4 5 2 6 7 3 1
*/
