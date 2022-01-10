// 5.C Program to find sum of elements using array

/*        I.            Input number of elements in array

      II.            Input the elements using array

    III.            Create a function and find the sum of array elements using loop

    IV.            Display the sum

 

 Input:

No of elements of array: 5

Case1:  10  20  30  40  50
*/

#include <stdio.h>

int sum(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    sum += arr[i];
    return sum;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d", sum(arr, n));
    return 0;
}

/* Input: 10  20  30  40  50
   Output: 150
*/