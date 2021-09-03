// Write a simple Java program to find the volume of cube and cuboid using  constructor overloading.

/* Read a value for cube.

   Read three values for Cuboid.
*/

import java.util.Scanner;
 
public class Main 
{
    public static void main(String[] args) {
         
        Scanner in = new Scanner(System.in);
         
        String origString = in.nextLine();
         
        String reverseString = new StringBuilder(origString).reverse().toString();
         
        if (origString.equals(reverseString)) {
            System.out.print("Yes, "+ origString);
            System.out.print(" is a string palindrome");
        } else {
            System.out.print("No, "+ origString);
           System.out.print(" is not a string palindrome");
        }
            
        }
}

/*  (1)
  Input: radar
  Output: Yes, radar is a string palindrome

  (2)
  Input: refer
  Output: Yes, refer is a string palindrome

  (3)
  Input: rod
  Output: No, rod is not a string palindrome
*/