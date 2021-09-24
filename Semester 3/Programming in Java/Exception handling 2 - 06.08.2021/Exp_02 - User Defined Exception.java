// Write a java program to create a user defined exception. 

/* Get a number as input.
   If the number is negative then the program should throw a user defined exception
*/

import java.util.Scanner;

public class Main 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        if (x < 0)
        {
            System.out.println("Exception raised : Negative number");
        }
        else
        {
            System.out.println("Positive number : " + x);
        }
    }
}

/* (1) 
   Input: -5
   Output: Exception raised : Negative number
    
   (2)
   Input: 23
   Output: Positive number : 23
*/
