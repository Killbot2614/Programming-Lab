// Java program to find the largest element in the array

/* 20

10

50

30

90

largest : 90
*/

import java.util.*;

public class Main {
   public static void main(String[] args) {
      int i, large;
      int[] arr = new int[5];
      Scanner sc = new Scanner(System.in);
     
      for(i = 0; i < 5; i++) {
         arr[i] = sc.nextInt();
      }
      
      large = arr[0];
      for(i = 1; i < 5; i++) {
          large = large < arr[i] ? large = arr[i] : 0;
      }
      
      System.out.println(large);
   }
}

/* Input: 20
          10
          50
          30
          90
   Output: 90
*/
