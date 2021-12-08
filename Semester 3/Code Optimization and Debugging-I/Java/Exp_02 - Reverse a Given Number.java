// Java Program to reverse a given number using Recursive function

// Java Program to reverse a given number using Recursive function

import java.util.*;

public class Main {
	public static void reverse(int num) {
	    if (num < 10) {
	        System.out.println(num);
	        return;
	} else {
	    System.out.print(num % 10);
	    reverse(num / 10);
	}
}

public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int num = sc.nextInt();
    System.out.print("Reverse is : ");
    reverse(num);
    }
}

/*  (1) 
    Input: 4562
    Output: Reverse is : 2654
	
    (2)
    Input: 1234
    Output: Reverse is : 4321
	
    (3)
    Input: 5006
    Output: Reverse is : 6005
*/
