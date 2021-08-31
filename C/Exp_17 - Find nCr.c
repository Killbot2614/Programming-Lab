// Let's suppose there are n number of players, in which we have to select r number of players. Therefore, to select r things out of n, use combination formula
// nCr = n!/r!(n-r)!

#include <stdio.h>

long factorial(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * factorial(n - 1));  
}  

int main() 
{
    int n, r;
    scanf("%d", &n);
    scanf("%d", &r);
    
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    
    printf("%d", ncr);
}

// Input: 15
//        3
// Output: 455
