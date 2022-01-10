// 6.MERGE SORT in C++

/* i.                    Input an array

ii.                  Divide the array into 2 halves by finding middle element of array m=(l+r)/2

iii.                Divide the first half of array further until you get single element in array.

Call mergesort for first half: mergesort(array,l,m)

iv.               Divide the second half of array further until you get single element in array.

Call mergesort for secondt half: mergesort(array,m+1,r)

v.                 Merge the two halves of array recursively by comparing elements of both parts

i.e) Call merge(array,l,m,r)


Input: 3 7 2 8 5 9
*/

#include <iostream>
using std::cout;

void merge(int array[], int const x, int const y, int const z)
{
    auto const n1 = y - x + 1;
    auto const n2 = z - y;

    
    auto *L_Array = new int[n1],
         *R_Array = new int[n2];

   
    for (auto i = 0; i < n1; i++)
        L_Array[i] = array[x + i];
    for (auto j = 0; j < n2; j++)
        R_Array[j] = array[y + 1 + j];

    auto indexOfn1 = 0,
	     indexOfn2 = 0; 
    int mergedArrayIndex = x; 

    while (indexOfn1 < n1 && indexOfn2 < n2) 
	{
        if (L_Array[indexOfn1] <= R_Array[indexOfn2]) 
		{
            array[mergedArrayIndex] = L_Array[indexOfn1];
            indexOfn1++;
        }
        else 
		{
            array[mergedArrayIndex] = R_Array[indexOfn2];
            indexOfn2++;
        }
        mergedArrayIndex++;
    }
    
    while (indexOfn1 < n1) 
	{
        array[mergedArrayIndex] = L_Array[indexOfn1];
        indexOfn1++;
        mergedArrayIndex++;
    }
    
    while (indexOfn2 < n2) 
	{
        array[mergedArrayIndex] = R_Array[indexOfn2];
        indexOfn2++;
        mergedArrayIndex++;
    }
}

void mergeSort(int array[], int const a, int const b)
{
    if (a >= b)
        return; 

    auto y = a + (b - a) / 2;
    mergeSort(array, a, y);
    mergeSort(array, y + 1, b);
    merge(array, a, y, b);
}


void display(int A[], int size)
{
    for (auto i = 0; i < size; i++)
        cout << A[i] << " ";
}

int main()
{
    int arr[] = { 3, 7, 9, 8, 5, 2 };
    auto arr_size = sizeof(arr) / sizeof(arr[0]);
	
    mergeSort(arr, 0, arr_size - 1);
    
    display(arr, arr_size);
    return 0;
}

/* Input: 3 7 9 8 5 2
   Output: 2 3 5 7 8 9
*/