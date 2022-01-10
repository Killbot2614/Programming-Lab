// 6.Merge Sort in C

/* i.                    Input an array

ii.                  Divide the array into 2 halves by finding middle element of array m=(l+r)/2

iii.                Divide the first half of array further until you get single element in array.

Call mergesort for first half: mergesort(array,l,m)

iv.               Divide the second half of array further until you get single element in array.

Call mergesort for secondt half: mergesort(array,m+1,r)

v.                 Merge the two halves of array recursively by comparing elements of both parts

i.e) Call merge(array,l,m,r)


Ex: input array: 12 11 13 5 6 7 
*/

#include <stdio.h>

void merge(int arr[], int x, int y, int z)
{
    int i, j, k;
    int n1 = y - x + 1;
    int n2 = z - y;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[x + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[y + 1 + j];

    i = 0;
    j = 0; 
    k = x;
	
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int x, int z)
{
    if (x < z) {
        int y = x + (z - x) / 2;

        mergeSort(arr, x, y);
        mergeSort(arr, y + 1, z);

        merge(arr, x, y, z);
    }
}

void display(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, arr_size - 1);
    display(arr, arr_size);
    return 0;
}

/* Input: 12 11 13 5 6 7
   Output: 5 6 7 11 12 13
*/