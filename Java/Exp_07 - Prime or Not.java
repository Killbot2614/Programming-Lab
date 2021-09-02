// Java Program to Check Whether a Number is Prime or Not

/** START
*    Step 1 → Take integer variable A
*    Step 2 → Divide the variable A with (A-1 to 2)
*    Step 3 → If A is divisible by any value (A-1 to 2) it is not prime
*    Step 4 → Else it is prime
*   STOP
*/

import java.util.Scanner;

public class Main
{
   public static void main(String args[])
   {		
	int temp;
	boolean isPrime = true;
	Scanner scan= new Scanner(System.in);

	int num = scan.nextInt();
        scan.close();
	for(int i = 2;i <= num / 2;i++)
	{
           temp = num % i;
	   if(temp == 0)
	   {
	      isPrime = false;
	      break;
	   }
	}

	if(isPrime)
	   System.out.println(num + " is a prime number");
	else
	   System.out.println(num + " is not a prime number");
   }
}

/** Input: 33
* Output: 33 is not a prime number
*/
