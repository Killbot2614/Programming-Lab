// C Program to find GCD or HCF of two numbers.

/*
GCD (Greatest Common Divisor) or HCF (Highest Common Factor) of two numbers is the largest number that divides both of them. 
For example GCD of 20 and 28 is 4 and GCD of 98 and 56 is 14.
*/

#include<stdio.h>
int main()
{
    int n1=100,n2=70,i,gcd;
    for(i=1;i<=n1 && i<=n2;++i)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
    }
    printf("The GCD of %d and %d is %d.",n1,n2,gcd);
    return 0;
}

// Input: 
// Enter the two numbers to find their GCD: 100 70

// Output:
// The GCD of 100 and 70 is 10.
