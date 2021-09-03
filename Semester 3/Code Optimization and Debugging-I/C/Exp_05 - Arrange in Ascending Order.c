//  C Program to arrange numbers in ascending order.

// STEP 1: START
// STEP 2: INITIALIZE arr[] ={5, 2, 8, 7, 1 }..
// STEP 3: SET temp =0
// STEP 4: length= sizeof(arr)/sizeof(arr[0])
// STEP 5: PRINT "Elements of Original Array"
// STEP 6: SET i=0. REPEAT STEP 7 and STEP 8 UNTIL i<length
// STEP 7: PRINT arr[i]
// STEP 8: i=i+1.
// STEP 9: SET i=0. REPEAT STEP 10 to STEP UNTIL i<n
// STEP 10: SET j=i+1. REPEAT STEP 11 UNTIL j<length
// STEP 11: if(arr[i]>arr[j]) then
//               temp = arr[i]
//               arr[i]=arr[j]
//               arr[j]=temp
// STEP 12: j=j+1.
// STEP 13: i=i+1.
// STEP 14: PRINT new line
// STEP 15: PRINT "Elements of array sorted in ascending order"
// STEP 16: SET i=0. REPEAT STEP 17 and STEP 18 UNTIL i<length
// STEP 17: PRINT arr[i]
// STEP 18: i=i+1.
// STEP 19: RETURN 0.
// STEP 20: END.


#include<stdio.h>
void swap(int* xp,int*yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void selectionSort(int arr[],int n)
{
    int i,j,min_idx;
    for(i=0;i<n-1;i++){
        min_idx=i;
        for(j=i+1;j<n;j++)
         if(arr[j]<arr[min_idx])
          min_idx=j;
    swap(&arr[min_idx],&arr[i]);
    }
}
void printArray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
     printf("%d ",arr[i]);
    printf(" \n");
}
int main()
{
    int arr[]={5,2,8,7,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}

// Input: 5 2 8 7 1
// Output: 1 2 5 7 8
