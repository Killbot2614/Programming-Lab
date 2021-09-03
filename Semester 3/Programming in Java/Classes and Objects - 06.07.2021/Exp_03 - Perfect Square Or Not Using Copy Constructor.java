// Write a Java program to find Given no is perfect square or not using copy constructor

import java.util.Scanner;

public class prog
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i = 0;i < n;i++)
        {
            arr[i] = sc.nextInt();
        }
        int count = 0;
        int temp;
        for (int x = arr.length - 1;x > 0;x--)
        {
            for(int y = 0;y<x;y++)
            {
                if(arr[y] > arr[y+1])
                {
                 temp = arr[y];
                 arr[y] = arr[y + 1];
                 arr[y + 1] = temp;
                 count++;
                }
            }
        }
        for(int i = 0;i < arr.length;i++)
        {System.out.print(arr[i]+" ");}
        System.out.println();
        System.out.println("Total No of exchanges : "+count);
    }
}

/*  (1)
  Input: 5
         3 4 1 5 2
  Output: 1 2 3 4 5
          Total No of exchanges : 5

  (2)
  Input: 5
         10 15 2 3 50
  Output: 2 3 10 15 50
          Total No of exchanges : 4

  (3)
  Input: 4
         4 3 2 1
  Output: 1 2 3 4
          Total No of exchanges : 6
*/