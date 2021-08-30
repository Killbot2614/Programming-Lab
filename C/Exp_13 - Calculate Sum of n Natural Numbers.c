//  Write a C program to recursive function that calculate sum of first n natural numbers

/*
find sum of first n natural numbers using recursion.
For example, sum of first n(4) numbers using recursion is sum = 4+3+2+1 = 10
*/

#include<stdio.h>
int sum(int);
int main()
{
    int number;
    number=10;
    printf("The sum of first %d numbers is %d.",number,sum(number));
    return 0;
}
int sum(int n)
{
    if(n==0)
      return 0;
    else
      return n + sum(n-1);
}

// Input:  
// Enter a positive integer :10

// Output: 
// The sum of first 10 numbers is 55.