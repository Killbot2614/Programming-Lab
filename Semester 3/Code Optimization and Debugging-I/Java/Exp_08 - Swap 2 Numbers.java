// Java program to swap two numbers

/* Swapping a=10 b=5
   After Swap
   a=5 b=10
*/

import java.util.*;  

public class Main {  
	public static void main(String[] args) {  
	   int a, b, c;
	   Scanner sc = new Scanner(System.in);  
	   a = sc.nextInt();  
	   b = sc.nextInt();  
	   c = a;  
	   a = b;  
	   b = c;  
	   System.out.println(a + "\n" + b);
	}    
}

/* Input: 10
          5
   Output: 5
           10
*/