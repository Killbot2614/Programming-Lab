// Java Program to convert lowercase string to uppercase string

/*  Get the input string
  Convert lower case to upper case 
  Print the output
*/

import java.util.Scanner;

public class Main
{
    public static void main(String[] input)
    {
        String strUpper, strLower;
        Scanner scan = new Scanner(System.in);
        
        
        strUpper = scan.nextLine();
        
        strLower = strUpper.toUpperCase();
        System.out.print(strLower);
    }
}

/*  (1)
  Input: sathyabama
  Output: SATHYABAMA

  (2)
  Input: computer
  Output: COMPUTER

  (3)
  Input: University
  Output: UNIVERSITY
*/
