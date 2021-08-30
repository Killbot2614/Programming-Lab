/** Get the input string
* Convert lower case to upper case 
* Print the output
*/

import java.util.Scanner;

public class Main
{
    public static void main(String[] input)
    {
        char ch;
        int temp;
        Scanner scan = new Scanner(System.in);

        ch = scan.next().charAt(0);
		
        temp = (int) ch;
        temp = temp - 32;
        ch = (char) temp;
		
        System.out.print(ch);
    }
}

/** (1)
* Input: sathyabama
* Output: SATHYABAMA

* (2)
* Input: computer
* Output: COMPUTER

* (3)
* Input: University
* Output: UNIVERSITY
*/
