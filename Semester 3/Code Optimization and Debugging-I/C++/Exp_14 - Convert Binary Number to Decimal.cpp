// C++ Program to Convert Binary Number to Decimal and vice-versa.
/*
1. The user is asked to enter a binary number and it is stored in the variable ‘num’.
2. The variable ‘b’ is initialized as 1 and ‘dec’ as 0. num is copied to the variable ‘temp’.
3. Using a while loop, modulus of temp is stored in ‘rem’.
4. rem is multiplied with b and added to dec.
5. In every iteration, b is multiplied with 2.
6. The loop continues till temp is less than 0.
7. The decimal equivalent is stored in dec and printed.
*/

#include <iostream>  
using namespace std;

int main()  
{  
    int num = 10101, decimal_num = 0, base = 1, rem, a[10], n = 23, i=0; 
    
    cout<<"Binary form of " << n <<" is ";   
    
    while(n>0)
    {    
        a[i]=n%2;    
        n= n/2; 
        i++;
    }
    
    for(i=i-1 ;i>=0 ;i--)    
    {    
        cout<<a[i];    
    }   
    cout<<endl<<"Decimal form of "<<num<<" is ";
    
    while ( num > 0)  
    {  
        rem = num % 10;
        decimal_num = decimal_num + rem * base;  
        num = num / 10;
        base = base * 2;  
    }  
    
    cout << decimal_num << endl;
    return 0;
}

// Input: 
// Binary form of 23 is 10111
// Decimal form of 10101 is 21

// Output: 
// Binary form of 23 is 10111
// Decimal form of 10101 is 21
