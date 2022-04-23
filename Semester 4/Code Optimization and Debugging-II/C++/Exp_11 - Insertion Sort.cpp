// C++ Program for Insertion Sort

/* Eg:
n = 7
Array Elements = {70, 50, 30, 10, 60, 20, 40}
Sorted Array = {10, 20, 30, 40, 50, 60, 70}
*/

#include <iostream>
using std::cout;
using std::cin;

void insertionSort(int *array, int size) {
   int k, j;
   for(int i = 1; i < size; i++) {
      k = array[i];
      j = i;
      while(j > 0 && array[j - 1] > k) {
         array[j] = array[j - 1];
         j--;
      }
      array[j] = k;
   }
}

void display(int *array, int size) {
   for(int i = 0; i < size; i++)
      cout << array[i] << " ";
   cout << "\n";
}

int main() {
   int n = 6;
   // cin >> n; temporarily
   int arr[n];
   for(int i = 0; i < n; i++) {
      cin >> arr[i];
   }
   insertionSort(arr, n);
   display(arr, n);
}

/* (1)
   Input:7
         70 50 30 10 60 20 40
   Output: 10 20 30 40 50 60 70
   
   (2)
   Input: 6
          66 44 22 11 33 55
   Output: 11 22 33 44 55 66
*/
