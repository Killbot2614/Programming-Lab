// C Program to Multiply Two Matrices Using Multi-dimensional Arrays.

// Declare and initialize two two-dimensional arrays a and b.
// Calculate the number of rows and columns present in the array a and store it in variables row1 and col1 respectively.
// Calculate the number of rows and columns present in the array b and store it in variables row2 and col2 respectively.
// Check if col1 is equal to row2. For two matrices to be multiplied, the number of column in the first matrix must be equal to the number of rows in the second matrix.
// If col1 is not equal to row2, display the message "Matrices cannot be multiplied."
// If they are equal, loop through the arrays a and b by multiplying elements of the first row of the first matrix with the first column of the second matrix and add all the product of elements.
// e.g prod11 = a11 x b11 + a11 x b21 + a11 x b31
// Repeat the previous step till all the rows of the first matrix is multiplied with all the columns of the second matrix.
// Display the elements of array prod.

#include<stdio.h>
void multiply(int mat1[3][3],int mat2[3][3],int res[3][3])
{
    int i,j,k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            res[i][j]=0;
            for(k=0;k<3;k++)
             res[i][j]+=mat1[i][k]*mat2[k][j];
        }
    }
}
int main()
{
    int c[3][3];
    int a[3][3]={{1,3,2},{3,1,1},{1,2,2}};
    int b[3][3]={{2,1,1},{1,0,1},{1,3,1}};
    printf("Product of two matrices:\n");
    multiply(a,b,c);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}

// Input:
// a=[ [1, 3, 2],
//    [3, 1, 1],
//    [1, 2, 2]
//    ];
// b=[ [2, 1, 1],
//    [1, 0, 1],
//   [1, 3, 1]
//     ];

// Output: 
// Product of two matrices:
// 7 7 6
// 8 6 5
// 6 7 5