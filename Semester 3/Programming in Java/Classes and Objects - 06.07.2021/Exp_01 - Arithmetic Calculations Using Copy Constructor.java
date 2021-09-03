// Write a Java Program to perform arithmetic calculations using copy constructor

// Read two numbers and display the result.

import java.util.Scanner;

public class Main 
{
    public static void main(String[] args)
    {
        int count, num1 = 0, num2 = 1;
        Scanner scanner = new Scanner(System.in);
        count = scanner.nextInt();
        scanner.close();
        int i = 0;
        while(i < count)
        {
            System.out.print(num1 + " ");
            int sumOfPrevTwo = num1 + num2;
            num1 = num2;
            num2 = sumOfPrevTwo;
            i++;
        }
    }

}

/*  (1)
  Input: 12
  Output: 0 1 1 2 3 5 8 13 21 34 55 89

  (2)
  Input: 6
  Output: 0 1 1 2 3 5

  (3)
  Input: 8
  Output: 0 1 1 2 3 5 8 13
*/