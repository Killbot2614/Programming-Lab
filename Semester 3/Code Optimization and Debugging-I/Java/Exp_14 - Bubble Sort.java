// Java program to implement Bubble Sort

import java.util.*;

public class Main
{
    void bubbleSort(int arr[])
    {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
    }
 
    void display(int arr[])
    {
        int n = arr.length;
        for (int i = 0; i < n; ++i)
            System.out.println(arr[i] + " ");
        System.out.println();
    }
 
    public static void main(String[] args)
    {
        Main obj = new Main();
        int arr[] = {30, 20, 10, 50, 40};
        obj.bubbleSort(arr);
        obj.display(arr);
    }
}

/* Input: 30
          20
          10
          50
          40
   Output: 10
           20
           30
           40
           50
*/