//  CPP Program to Check Whether a Number is Prime or Not.

// START
//   Step 1 → Take integer variable A
//   Step 2 → Divide the variable A with (A-1 to 2)
//   Step 3 → If A is divisible by any value (A-1 to 2) it is not prime
//   Step 4 → Else it is prime
// STOP

#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        cout<<"Number is Prime."<<endl;
    }
    else
    {
        cout<<"Number is Prime."<<endl;
    }
    return 0;
}

// Input: Enter the Number to check Prime: 17
// Output: Number is Prime.