// C Program for Insertion Sort

/*
Eg:

, n = 

Array Elements = {70, 50, 20, 10, 30, 40, 60}

Sorted Array = {10, 20, 30, 40, 50, 60, 70}
*/

#include <stdio.h>

int main()
{
    int a, b, c, temp;
    int arr[64];
 
    scanf("%d", &a);
 
    for (b = 0; b < a; b++)
    {
        scanf("%d", &arr[b]);
    }
    
    for (b = 1 ; b <= a - 1; b++)
    {
	    c = b;
            while ( c > 0 && arr[c - 1] > arr[c])
            {	        
                temp     = arr[c];
                arr[c]   = arr[c - 1];
                arr[c - 1] = temp;
                c--;
            }
    }
    
    for (b = 0; b <= a - 1; b++)
    {
        printf("%d ", arr[b]);
    }
    return 0;
}

/*  (1)
    Input: 7
           70 50 20 10 30 40 60
	Output: 10 20 30 40 50 60 70
	(2)
    Input: 7
           66 44 22 11 33 55
	Output: 11 22 33 44 55 66
*/
