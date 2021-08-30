//  C Program to Check Whether a Number is Prime or Not
// START
//   Step 1 → Take integer variable A
//   Step 2 → Divide the variable A with (A-1 to 2)
//   Step 3 → If A is divisible by any value (A-1 to 2) it is not prime
//   Step 4 → Else it is prime
// STOP

#include<stdio.h>
int main()
{
    int num=33,flag=0;
    for(int i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            printf("%d is not a prime number",num);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%d is a prime number",num);
    }
}

// Input: 33
// Output: 33 is not a prime number
