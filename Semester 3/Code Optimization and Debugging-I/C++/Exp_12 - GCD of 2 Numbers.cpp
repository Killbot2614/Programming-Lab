//  C++ program to find the GCD of two numbers.
/*
GCD (Greatest common divisor) is also known as HCF (Highest Common Factor).
For example
20 = 2 * 2 * 5
28 = 2 * 2 * 7
The highest common factor of the two numbers is 2 and 2.
So, the HCF of two numbers is 2 * 2 = 4.
*/

#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    if(a==0)
    return b;
    
    if(b==0)
      return a;
    
    if(a==b)
      return a;
    
    if(a>b)
      return gcd(a-b,b);
    return gcd(a,b-a); 
    
}

int main()
{
    int a=96,b=108;
    cout<<"GCD or HCF of given numbers: "<<gcd(a,b);
    return 0;
}

// Input: 
// Enter two integer values:
// 96
// 108

// Output: 
// GCD or HCF of given numbers: 12