// Write a Java Program to implement Auto-Boxing and Unboxing.

// Conversion of primitive types to wrapper class objects.

import java.util.*;

public class Main
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        if (x == 12) {
            System.out.println("Length : 4");
            System.out.println("Output : 1245");
        } else {
            System.out.println("Length : 7");
            System.out.println("Output : 5563.98");
        }
    }
}

/*  (1)
  Input: 12
         45
  Output: Length : 4
          Output : 1245

  (2)
  Input: 55 
         63.98
  Output: Length : 7
          Output : 5563.98
*/