// Binary Search in C

/* Eg. 

n = 10

a[10] = {10 12 20 32 50 55 65 80 99 25}

Key = 50

50 is found at the position 5
*/

#include <stdio.h>

int main()
{
   int x, y, z, n, c, search, array[100];
   scanf("%d", &n); 
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]); 
   scanf("%d", &search);
   x = 0;
   z = n - 1;
   y = (x + z) / 2;
   while (x <= z) {
      if (array[y] < search)
         x = y + 1;    
      else if (array[y] == search) {
         printf("%d is found at the position %d\n", search, y + 1);
         break;
      }
      else
         z = y - 1;
      y = (x + z) / 2;
   }
   if (x > z)
      printf("%d is not found in the given array\n", search);
   return 0;  
}

/* (1) 
   Input: 10
          10 12 20 32 50 55 65 80 99 25 
	  50
   Output: 50 is found at the position 5
   (2) 
   Input: 7
          10 20 30 40 50 60 70 
	  65
   Output: 65 is not found in the given array
   (3) 
   Input: 5
          11 22 33 44 55 
	  44
   Output: 44 is found at the position 4
*/
