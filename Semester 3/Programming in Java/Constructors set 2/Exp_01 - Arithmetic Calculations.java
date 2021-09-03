// Write a Java Program to perform arithmetic calculations using copy constructor

// Read two numbers and display the result.

import java.util.Scanner;
 
public class Main {
 
 public static void main(String[] args) {
  Scanner in = new Scanner(System.in);
   
  int num1 = in.nextInt();
  int num2 = in.nextInt();
   
 
  System.out.println("Sum = " + (num1 + num2));
  System.out.println("prod = " + (num1 * num2));
  System.out.println("diff = " + (num1 - num2));
  
 }
 
}

/*  (1)
  Input: 15
         20
  Output: Sum = 35
          prod = 300
          diff = -5

  (2)
  Input: 8
         3
  Output: Sum = 11
          prod = 24
          diff = 5

  (3)
  Input: 55
         77
  Output: Sum = 132
          prod = 4235
          diff = -22
*/