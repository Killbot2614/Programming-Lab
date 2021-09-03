//  C++ Program to sort the elements of an array in ascending order.

// Declare and initialize an array.
// Loop through the array and select an element.
// The inner loop will be used to compare the selected element from the outer loop with the rest of the elements of the array.
// If any element is less than the selected element then swap the values.
// Continue this process till entire array is sorted in ascending order.

#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int size, i, j, temp;
    cin>>size;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<' ';
    }
    return 0;
}

// Input:
// 5
// 20 50 30 10 40

// Output:
// 10 20 30 40 50