//  C++ program to Find Sum of Natural Numbers using Recursion.
/*
The positive numbers 1, 2, 3... are known as natural numbers.
 The program below takes a positive integer from the user and calculates the sum up to the given number.

For example -
If user enter 8 , then our program will calculate sum upto that number.
1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 = 36
*/

#include<iostream>
using namespace std;
int recurSum(int n)
{
    if(n<=1)
      return n;
    return n + recurSum(n-1);  
}

int main()
{
 int n=10;
 cout<<"Sum = "<<recurSum(n);
 return 0;
}

// Input:
// Enter an positive integer: 10

// Output:
// Sum = 55
