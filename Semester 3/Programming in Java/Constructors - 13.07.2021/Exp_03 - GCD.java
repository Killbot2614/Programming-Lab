// Write a Java program to find GCD

import java.util.Scanner;

public class prog  
{  
    public static void main(String[] args)   
    {  
        int a, b, gcd = 0;  
        Scanner sc = new Scanner(System.in);  
        a = sc.nextInt();
        b = sc.nextInt();  
        gcd = findGCD(a, b);  
        System.out.println("GCD = " + gcd);  
    }
    public static int findGCD(int a, int b)  
    {  
        while(b != 0)  
        {  
            if(a > b)  
            {  
                a = a - b;  
            }  
            else  
            {     
                b = b - a;  
            }  
        }  
    return a;  
    }  
}  
 
 /*  (1)
  Input: 5
         10
  Output: GCD = 5

  (2)
  Input: 10
         100
  Output: GCD = 10

  (3)
  Input: 18
         27
  Output: GCD = 9
*/