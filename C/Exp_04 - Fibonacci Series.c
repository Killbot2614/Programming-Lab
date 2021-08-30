//  C Program to print the Fibonacci Series

// Input number of Fibonacci terms to print from user. Store it in a variable say terms.
// Declare and initialize three variables, I call it as Fibonacci magic initialization. a=0, b=1 and c=0.
// Here c is the current term, b is the n-1th term and a is n-2th term.

// Run a loop from 1 to terms, increment loop counter by 1. The loop structure should look like for(i=1; i<=term; i++). It will iterate through n terms
// Inside the loop copy the value of n-1th term to n-2th term i.e. a = b.
// Next, copy the value of nth to n-1th term b = c.

// Finally compute the new term by adding previous two terms i.e. c = a + b.

// Print the value of current Fibonacci term i.e. c.

#include<stdio.h>
int main()
{
    int a, b, c, i, terms;
    scanf("%d",&terms);
    a=0;
    b=1;
    c=0;
    for(i=1;i<=terms; i++)
    {
        printf("%d, ",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}

// Input: 10
// Output: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,
