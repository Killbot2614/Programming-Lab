// Let's suppose there are n number of players, in which we have to arrange r number of players. Therefore, to arrange r things out of n, use permutation formula:
// nPr = n!/(n-r)!

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
    
    int npr = factorial(n) / factorial(n - r);
    
    printf("Permutation = %d", npr);
    
}

// Input: 15
//	  3
// Output: Permutation = 2730
