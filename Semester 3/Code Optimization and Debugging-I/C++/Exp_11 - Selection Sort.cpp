//  C++ Program to Implement Selection Sort.

/*
Begin
   for i := 0 to size-2 do //find minimum from ith location to size
      iMin := i;
      for j:= i+1 to size – 1 do
         if array[j] < array[iMin] then
            iMin := j
      done
      swap array[i] with array[iMin].
   done
End
*/

#include<iostream>
using namespace std;
void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void printArray(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
void selectionSort(int array[],int size)
{
    for(int step=0;step<size-1;step++)
    {
        int min_idx=step;
        for(int i=step+1;i<size;i++)
        {
            if(array[i]<array[min_idx])
              min_idx=i;
        }
        swap(&array[min_idx],&array[step]);
    }
}
int main()
{
    int data[]={20,12,10,15,2};
    int size=sizeof(data)/sizeof(data[0]);
    selectionSort(data,size);
    cout<<"Sorted array in Ascending Order:\n";
    printArray(data,size);
}

// Input: 20, 12, 10, 15, 2

// Output: 
// Sorted array in Ascending Order:
// 2 10 12 15 20