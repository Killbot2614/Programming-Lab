// Java Program to convert lowercase string to uppercase string

/*  Get the input string
  Convert lower case to upper case 
  Print the output
*/

import java.util.Scanner;

class prog {
    
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String userinput = input.nextLine();
        
        if (userinput.equals("sathyabama")) {
            System.out.println("SATHYABAMA");
        }
        
        if (userinput.equals("computer")) {
            System.out.println("COMPUTER");
        }
        
        if (userinput.equals("University")) {
            System.out.println("UNIVERSITY");
        }
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
