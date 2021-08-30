//  C program for selection sort.

/*
In Selection sort, the smallest element is exchanged with the first element of the unsorted list of elements (the exchanged element takes the place where smallest element is initially placed). 
Then the second smallest element is exchanged with the second element of the unsorted list of elements and so on until all the elements are sorted.
*/

#include<stdio.h>
void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void selectionSort(int array[],int size)
{
    for (int step=0;step<size-1;step++)
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
void printArray(int array[],int size)
{
    for (int i=0;i<size;++i)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}
int main()
{
    int data[]={15,10,99,53,36};
    int size=sizeof(data)/sizeof(data[0]);
    selectionSort(data,size);
    printArray(data,size);
}

// Input : 15, 10, 99, 53, 36

// Output : 10 15 36 53 99

