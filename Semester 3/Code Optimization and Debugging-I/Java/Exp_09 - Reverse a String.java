// Java program to reverse a string

/* str ="welcome"
   rev ="emoclew"
*/

import java.util.*;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        String rev = "";
 
 for (int i = str.length() - 1; i >= 0; i--) 
    rev = rev + str.charAt(i);
 System.out.println(rev);
 }
}

/* Input: welcome
   Output: emoclew
*/