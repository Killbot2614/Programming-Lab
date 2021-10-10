// Write a Java Program to perform arithmetic calculations using copy constructor ?

// Read two numbers and display the result.

import java.util.Scanner;

class test {
    int n, i, p = 1;
    Scanner sc = new Scanner(System.in);
    test() {
        n = sc.nextInt();
    }
    void checkPrime() {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                p = 0;
                break;
            }
        }
        if (p == 1) {
            System.out.println("Its prime no");
        } else {
            System.out.println("Its not prime no");
        }
    }
}

public class Main {
    public static void main(String[] args) {
        test obj = new test();
        obj.checkPrime();
    }
}

/*  (1)
  Input: 5
  Output: Its prime no

  (2)
  Input: 8
  Output: Its not prime no

  (3)
  Input: 7
  Output: Its prime no
*/
