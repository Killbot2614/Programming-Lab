// Write a Java Program to implement Auto-Boxing and Unboxing.

// Conversion of primitive types to wrapper class objects.

import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String x = sc.nextLine();
        String y = sc.nextLine();
        
        Integer x1 = Integer.valueOf(x);
        
        try {
            Integer y1 = Integer.valueOf(y);
            System.out.println("Length : "+ (x1.toString() + y1.toString()).length());
            System.out.println("Output : "+ (x1.toString() + y1.toString()));
        }
        
        catch (NumberFormatException e) {
            Float y1 = Float.valueOf(y);
            System.out.println("Length : "+ (x1.toString() + y1.toString()).length());
            System.out.println("Output : "+ (x1.toString() + y1.toString()));
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
