// C Program to check if number is even or odd

// If a number is exactly divisible by 2 then its an even number else it is an odd number. In this article we have shared two ways(Two C programs) to check whether the input number is even or odd. 1) Using Modulus operator(%) 2) Using Bitwise operator.

#include <stdio.h>

int main() {
    int num = 89;
    scanf("%d", &num);
    (num % 2 == 0) ? printf("%d is an even number", num) : printf("%d is an odd number", num);
    
    return 0;
}

// Output: 89 is an odd number
