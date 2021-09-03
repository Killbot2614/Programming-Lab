//  C Program to Convert Binary Number to Decimal and vice-versa
/*
Take a binary number as the input.
Divide the number by 10 and store the remainder into variable rem.
decimal_num = decimal_num + rem * base;
Initially, the decimal_num is 0, and the base is 1, where the rem variable stores the remainder of the number.
Divide the quotient of the original number by 10.
Multiply the base by 2.
Print the decimal of the binary number.
*/

#include<stdio.h>
int main()
{
    int num = 10101001, binary_num, decimal_num = 0, base = 1, rem;
    binary_num = num;
    while(num>0)
    {
        rem = num % 10;
        decimal_num = decimal_num + rem * base;
        num = num / 10;
        base = base * 2;
    }
    printf("The Binary number is = %d", binary_num);
    printf("\nIts decimal equivalent is = %d", decimal_num);
    return 0;
}

// Input: 
// Enter a binary number(1s and 0s)
// 10101001

// Output:
// The Binary number is = 10101001
// Its decimal equivalent is = 169