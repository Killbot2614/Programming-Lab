// Java Program to find the GCD of two numbers

import java.util.*;

public class Main {
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        int gcd = 1;
        
        for (int i = 1; i <= x && i <= y; i++) {  
            if (x % i == 0 && y % i == 0)
                gcd = i; 
            
        }  
        System.out.printf("%d", gcd);  
        
    }  
}

/* Input: 12
          8
   Output: 4
*/