// Write a Java program to demonstrate Exception Handling.

/* a=10 
   b=0
   Arithmetic Exception : divide by Zero Error
   Within try Block
   Within Catch Block
   Within Finally Block
*/

import java.util.Scanner;

class prog
{
public static void main(String args[])
{
    Scanner s1=new Scanner(System.in);
    int a=s1.nextInt();
    int b=s1.nextInt();
    try{
        int c=a/b;
        System.out.println("Within try Block");
        System.out.println("Output (A/B) = "+c);
    }
    catch(ArithmeticException e)
    {
        System.out.println("Arithmetic Exception : Divide by Zero");
    }
    finally{
        System.out.println("Within Finally Block");
    }
}
 
}

/*  (1)
  Input: 10
         0
  Output: Arithmetic Exception : Divide by Zero
          Within Finally Block

  (2)
  Input: 10 
         2
  Output: Within try Block
          Output (A/B) = 5
          Within Finally Block
*/

