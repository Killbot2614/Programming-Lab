// 5.C++ Program to find sum of elements using Array

/*        I.            Create a class 3 data members (n, a[5], sum)

      II.            Create 3 member functions

a.       To read Input number of elements, elements using array

b.      To find the sum of array elements using loop

c.       To display the sum

    III.            Create object to access the member functions

 

No of elements of array: 5

Enter the array elements : 10  20  30  40  50
*/

#include <iostream>
using std::cout;

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
    cout << sum(arr, n); 
    return 0; 
}

/* Input: 10  20  30  40  50
   Output: 150
*/