//  C Program to Print Pyramids and Patterns

// Accept the number of rows from the user to form pyramid shape
// Iterate the loop till the number of rows specified by the user:
// Display 1 star in the first row
// Increase the number of stars based on the number of rows.

#include <stdio.h>
int main()
{
    int rows=5;
    int i;
    int j;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows -i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Input: *


//   Output:   *
//            * *
//           * * *
//          * * * *
//         * * * * *
Passed all tests!  
