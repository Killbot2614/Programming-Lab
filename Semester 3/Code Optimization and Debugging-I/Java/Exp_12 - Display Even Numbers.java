// Java Program to Display Even Numbers From 1 to 100

import java.util.*;

public class Main {  
    public static void main(String[] args) {  
        displayEvenNumbers(1, 31);  
    }   
    
    private static void displayEvenNumbers(int num, int end) {  
        if (num > end)   
        return;
        
        if (num % 2 == 0) {   
            System.out.print(num + " ");
            displayEvenNumbers(num + 2, end);
        } else { 
            displayEvenNumbers(num + 1, end); 
        }  
    }   
}

// Output: 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30