// C Program for Selection Sort

/* Eg:

n = 7

Array Elements = {70, 50, 30, 10, 60, 40, 20}

Sorted Array = {10, 20, 30, 40, 50, 60, 70}
*/
#include <stdio.h>

void selectionSort(int arr[], int size);
void swap(int *a, int *b);

void selectionSort(int arr[], int size)

{
    int i, j;
    for (i = 0 ;  i < size;i++)
    {
        for (j = i ; j < size; j++)
        {
            if (arr[i] > arr[j])
                swap(&arr[i], &arr[j]);
        }
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

int main()

{
    int array[10], i, size;
    scanf("%d", &size);
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);
    selectionSort(array, size);
    for (i = 0; i < size;i++)
        printf("%d ", array[i]);
    return 0;

}

/* (1)
   Input: 7
          70 50 30 10 60 40 20
   Output: 10 20 30 40 50 60 70
   
   (2)
   Input: 6
          66 44 22 11 33 55
   Output: 11 22 33 44 55 66
*/