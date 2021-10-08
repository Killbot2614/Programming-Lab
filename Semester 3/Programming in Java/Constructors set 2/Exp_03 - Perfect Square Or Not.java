// Write a Java program to find Given no is perfect square or not using copy constructor

import java.util.Scanner;  

public class Main {   
    static boolean check(double number) {   
        double sqrt = Math.sqrt(number);
        return ((sqrt - Math.floor(sqrt)) == 0);   
    }   
    public static void main(String[] args) {  
        Scanner sc = new Scanner(System.in);  
        double number=sc.nextDouble();   
        
        if (check(number))   
        System.out.print("It is a perfect square"); 
        else  
        System.out.print("It is not a perfect square");   
    }   
}   

/*  (1)
  Input: 9
  Output: It is a perfect square

  (2)
  Input: 100
  Output: It is a perfect square

  (3)
  Input: 49
  Output: It is a perfect square
*/
