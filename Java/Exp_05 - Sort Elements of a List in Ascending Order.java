// Java program to sort the elements of list in ascending order.

/*  STEP 1: Declare and initialize an array.
  STEP 2: Loop through the array and select an element.
  STEP 3: The inner loop will be used to compare the selected element from the outer loop with the rest of the elements of the array.
  STEP 4: If any element is less than the selected element then swap the values.
  STEP 5: Continue this process until the entire array is sorted in ascending order.
*/

import java.util.Scanner;
public class Main 
{
    public static void main(String[] args) 
    {
    	int count, temp;
    	
        Scanner scan = new Scanner(System.in);
        count = scan.nextInt();
    
        int num[] = new int[count];
        for (int i = 0; i < count; i++) 
        {
            num[i] = scan.nextInt();
        }
        scan.close();
        for (int i = 0; i < count; i++) 
        {
            for (int j = i + 1; j < count; j++) { 
                if (num[i] > num[j]) 
                {
                    temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
        }

        for (int i = 0; i < count - 1; i++) 
        {
            System.out.print(num[i] + " ");
        }
        System.out.print(num[count - 1]);
    }
}

/*  (1)
  Input: 5
         5 2 8 7 1
  Output: 1 2 5 7 8

  (2)
  Input: 6
         10 30 52 60 7 80
  Output: 7 10 30 52 60 80

  (3)
  Input: 8
         80 70 60 50 40 30 20 10
  Output: 10 20 30 40 50 60 70 80
*/
