// Bubble sort in C++

/*Bubble sort is an algorithm that compares the adjacent elements and swaps their positions if they are not in the intended order. The order can be ascending or descending. 

i.                    Input an array

ii.                  Starting with the first element(index = 0), compare the current element with the next element of the array.

iii.                If the current element is greater than the next element of the array, swap them.

iv.               If the current element is less than the next element, move to the next element. Repeat  the  Step 1.
*/

#include <iostream>
using std::cout;
  
void move(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void bubbleSort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n-1; i++)     
      
    for (j = 0; j < n-i-1; j++) 
        if (arr[j] > arr[j+1]) 
            move(&arr[j], &arr[j+1]); 
} 

void display(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << "\n"; 
} 

int main() 
{ 
    int arr[] = {4, 1, 3, 9, 7}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    bubbleSort(arr, n); 
    display(arr, n); 
    return 0; 
}

/* Input: 4 1 3 9 7
   Output: 1 3 4 7 9
*/