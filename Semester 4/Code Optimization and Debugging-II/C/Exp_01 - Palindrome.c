// 1.C Program to find whether the given number is palindrome or not?

/* (i)Using Any Loops

(ii)Input must be an integer

(iii)Get the input value and reverse it then compare with the original value 

(iv)If both are equal then the inputted number is palindrome.
*/

#include <stdio.h>

int main(){
    int n, rev = 0, rem, original;
     scanf("%d", &n);
     original = n;
    
     while(n !=0){
         rem = n % 10;
         rev = rev * 10 + rem;
         n/= 10;
     }
	 if (original == rev)
        printf("%d is a palindrome",original);
	else
        printf("%d is not a palindrome.",original);
        
    return 0;    
}

// Input: 1001

// Output: 1001 is a palindrome
