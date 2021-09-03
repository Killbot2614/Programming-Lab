//  C Program to find whether the given number is palindrome or not?

// Input the number.
// Find the reverse of the number.
// If the reverse of the number is equal to the number, then return true. Else, return false.


#include<stdio.h>
int main(){

    int n, reversed = 0, remainder, original;
     scanf("%d",&n);
     original = n;
     
     while(n !=0){
         remainder = n % 10;
         reversed = reversed * 10 + remainder;
         n/= 10;
     }
     if (original == reversed)
        printf("%d",original);
    else
        printf("%d is not a palindrome.",original);
        
    return 0;    
}

// Input: 1234321
// Output: 1234321
