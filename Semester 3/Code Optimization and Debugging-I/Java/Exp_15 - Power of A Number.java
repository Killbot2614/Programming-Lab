// Java program to find the power of a number

// 2 power 3 = 8

import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int base = sc.nextInt();
    int exp = sc.nextInt();
    long result = 1;
    for (; exp != 0; --exp) {
      result *= base;
    }
    System.out.println(result);
  }
}

/* Input: 2
          3
   Output: 8
*/