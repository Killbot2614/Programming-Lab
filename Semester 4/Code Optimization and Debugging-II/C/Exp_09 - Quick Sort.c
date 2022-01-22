// 9.Quick sort in C

/*1.choose a pivot element

2.divide the array in such a way that elements smaller then pivot come before pivot and elements larger then pivot comes later

3.Recursively call quick sort on each of smaller sub arrays
*/

#include <stdio.h>

void quick_sort(int[], int, int);
int partition(int[], int, int);
 
int main()
{
    int a[50], n = 6, i;
    
    for(i = 0;i < n;i++)
    scanf("%d",&a[i]);
    quick_sort(a, 0, n - 1);
    for(i = 0;i < n;i++)
    printf("%d ",a[i]);
    return 0;
}
 
void quick_sort(int a[],int l,int u)
{
    int j;
    if(l < u) {
        j=partition(a, l, u);
        quick_sort(a, l, j - 1);
        quick_sort(a, j + 1,u);
    }
}
 
int partition(int a[], int l, int u)
{
    int v, i, j, temp;
    v = a[l];
    i = l;
    j = u + 1;
    do {
        do
        i++;
        while(a[i]< v && i <= u);
        do
        j--;
        while(v < a[j]);
        if(i < j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while(i < j);
    a[l] = a[j];
    a[j] = v;
    return(j);
}

/* (1)
   Input: 5 2 6 3 9 4
   Output: 2 3 4 5 6 9
   
   (2)
   Input: 9 3 1 10 5 14
   Output: 1 3 5 9 10 14
*/