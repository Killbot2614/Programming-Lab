/** Take the value of the integer and store in a variable.
* Transfer the value of the integer into another temporary variable.
* Using a while loop, get each digit of the number and store the reversed number in another variable.
* Check if the reverse of the number is equal to the one in the temporary variable.
* Print the final result.
* Exit.
*/

import java.util.*;

public class Main
{
    public static void main(String args[])
    {
        int num, tNum, sum;
        
        Scanner sc = new Scanner(System.in);
        num = sc.nextInt();
        tNum = num;
        sum = 0;
        while(tNum > 0)
        {
            sum = (sum * 10) + (tNum % 10);
            tNum /= 10;
        }
        
        if(num == sum)
            System.out.println(num + " is a palindrome number");
        else
            System.out.println(num + " is not a palindrome number");
    }
}

/** (1)
* Input: 121
* Output: 121 is a palindrome number

* (2)
* Input: 33433
* Output: 33433 is a palindrome number

* (3)
* Input: 3343
* Output: 3343 is not a palindrome number
*/
