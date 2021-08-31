/** Step 1:Input the 'n' value until which the Fibonacci series has to be generated
* Step 2:Initialize sum = 0, a = 0, b = 1 and count = 1
* Step 3:while (count <= n)
* Step 4:print sum
* Step 5:Increment the count variable
* Step 6:swap a and b
* Step 7:sum = a + b
* Step 8:while (count > n)
* Step 9:End the algorithm
* Step 10:Else
* Step 11:Repeat from steps 4 to 7
*/


import java.util.Scanner;
public class Fibonacci
{
	public static void main(String[] args) 
	{
		int n, a = 0, b = 0, c = 1;
		Scanner s = new Scanner(System.in);
		n = s.nextInt();
		
		for(int i = 1; i <= n; i++)
		{

			a = b;
			b = c;
			c = a + b;
			System.out.print(a+" ");
		}
	}
}

/** (1)
* Input: 5
* Output: 0 1 1 2 3

* (2)
* Input: 8
* Output: 0 1 1 2 3 5 8 13

* (3)
* Input: 12
* Output: 0 1 1 2 3 5 8 13 21 34 55 89
*/
