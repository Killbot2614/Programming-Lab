// 14.Find the count of distinct elements in every subarray of size `k`

/* Input:

No. of elements in an array = 7

array elements = { 2, 1, 2, 3, 2, 1, 4 };

k = 5;
 
Output:
 
The count of distinct elements in subarray { 2, 1, 2, 3, 2 } is 3
The count of distinct elements in subarray { 1, 2, 3, 2, 1 } is 3
The count of distinct elements in subarray { 2, 3, 2, 1, 4 } is 4
The count of distinct elements in subarray { 3, 2, 1, 4, 5 } is 5
*/

#include <stdio.h>

void findDistinctCount(int arr[], int n, int k)
{
    for (int x = 0; x <= n - k; x++)
    {
        int distinct = 0;
        for (int i = x; i < x + k; i++)
        {
            distinct++;
            for (int j = x; j < i; j++)
            {
                if (arr[i] == arr[j])
                {
                    distinct--;
                    break;
                }
            }
        }
 
        printf("%d\n", distinct);
    }
}
 
int main(void)
{   
    int size;
    scanf("%d", &size);
    
    int arr[size];
    for(int i = 0;i < size;i++) 
    {
        scanf("%d",&arr[i]);
    }
    
    int k;
    scanf("%d", &k);

    int n = sizeof(arr) / sizeof(arr[0]);
    findDistinctCount(arr, n, k);
 
    return 0;
}

/* (1)
  Input: 7
         2 1 2 3 2 1 4
		 5
  Output: 3
          3
		  4
  (2)
  Input: 7
         1 3 5 7 2 4 6
		 5
  Output: 5
          5
		  5
*/