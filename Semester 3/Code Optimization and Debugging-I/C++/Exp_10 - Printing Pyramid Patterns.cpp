// C++ Programs for printing pyramid patterns .

// Accept the number of rows from the user to form pyramid shape
// Iterate the loop till the number of rows specified by the user:
// Display 1 star in the first row
// Increase the number of stars based on the number of rows.

#include<iostream>
using namespace std;
int main()
{
    int rows=5;
    int i;
    int j;
    for(i=1; i<=rows;i++)
    {
        for(j=1; j<=rows-i;j++)
        {
            cout<<"  ";
        }
        for(int k=1;k<=(2*i-1);k++)
        {
           cout<<("* ");  
        }
        cout<<endl;
    }
    return 0;
}

// Input: *

// Output:
//        *
//      * * *
//    * * * * *
//  * * * * * * *
//* * * * * * * * *