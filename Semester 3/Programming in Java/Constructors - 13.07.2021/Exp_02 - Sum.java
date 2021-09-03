// Write a simple Java program to find the sum

/* Read a value for cube.

   Read three values for Cuboid.
*/

import java.util.Scanner; 
 public class SumNatural 
  { 
      public static void main(String[] args) 
      { 
         int n,i = 1,sum = 0; 
         Scanner input = new Scanner(System.in); 
         System.out.print(""); 
         n = input.nextInt(); 
         do 
             { 
                  sum = sum + i; 
                  i += 1; 
             }   while(i <= n); 
                  System.out.print("sum = "+sum); 
      } 
       
 }
 
 /*  (1)
  Input: 3
  Output: sum = 6

  (2)
  Input: 4
  Output: sum = 10

  (3)
  Input: 5
  Output: sum = 15
*/