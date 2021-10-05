// Java Program to convert the upper case to lower case and vice versa

import java.util.*;

public class Main {    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        StringBuffer newStr = new StringBuffer(str);
        
        for (int i = 0; i < str.length(); i++) {
            if (Character.isLowerCase(str.charAt(i))) {
                newStr.setCharAt(i, Character.toUpperCase(str.charAt(i)));
                
            } else if (Character.isUpperCase(str.charAt(i))) {
                newStr.setCharAt(i, Character.toLowerCase(str.charAt(i)));
            }
        }
        System.out.print(newStr);
    }
}

/*  (1)
    Input: WELCOME
	Output: welcome
	
	(2)
	Input: welcome
	Output: WELCOME
	
*/