// Java Program to check if the given number is Armstrong number or not

import java.util.*;

public class Main {
    public static void main(String[] args) {
        int originalNumber, remainder, result = 0;
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        originalNumber = number;

        while (originalNumber != 0)
        {
            remainder = originalNumber % 10;
            result += Math.pow(remainder, 3);
            originalNumber /= 10;
        }

        if (result == number)
            System.out.println("It is an Armstrong Number");
        else
            System.out.println("It is not an Armstrong Number");
    }
}

/* Input: 153
   Output: It is an Armstrong Number
*/