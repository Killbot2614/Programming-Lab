//  C++ Program to Multiply Two Matrix Using Multi-dimensional Arrays.

// Declare and initialize two two-dimensional arrays a and b.
// Calculate the number of rows and columns present in the array a and store it in variables row1 and col1 respectively.
// Calculate the number of rows and columns present in the array b and store it in variables row2 and col2 respectively.
// Check if col1 is equal to row2. For two matrices to be multiplied, the number of column in the first matrix must be equal to the number of rows in the second matrix.
// If col1 is not equal to row2, display the message "Matrices cannot be multiplied."
// If they are equal, loop through the arrays a and b by multiplying elements of the first row of the first matrix with the first column of the second matrix and add all the product of elements.
//   e.g prod11 = a11 x b11 + a11 x b21 + a11 x b31
// Repeat the previous step till all the rows of the first matrix is multiplied with all the columns of the second matrix.
// Display the elements of array prod.

#include<iostream>
using namespace std;
void multiply(int a[2][3],int b[3][3],int c[2][3])
{
    int i,j,k;
    for (i=0;i<2;i++){
        for (j=0;j<3;j++){
            c[i][j]=0;
            for (k=0;k<3;k++)
             c[i][j]+=a[i][k]*b[k][j];
        }
    }
}
int main()
{
    int a[2][3]={{2,4,1},{2,3,9}};
    int b[3][3]={{1,2,3},{3,6,1},{2,9,7}};
    int c[2][3];
    multiply(a,b,c);
    cout<<"Product of the two matrices is:\n";
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
}

// Input: 
// The first matrix is:
// 2 4 1
// 2 3 9 .
// The second matrix is:
// 1 2 3
// 3 6 1
// 2 9 7

// Output:
// Product of the two matrices is:
// 16 37 17
// 29 103 72