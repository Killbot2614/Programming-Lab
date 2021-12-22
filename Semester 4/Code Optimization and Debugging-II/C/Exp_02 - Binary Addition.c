// 2.C program to perform binary addition?

/* i) Using function

ii) Input must be integer.

iii)Perform binary addition

iv) Print the the result
*/

#include <stdio.h>

int main() {
    long b1, b2;
    int i = 0, rem = 0, sum[20];
    scanf("%ld", &b1);
    scanf("%ld", &b2);
    while (b1 != 0 || b2 != 0) {
        sum[i++] = (b1 % 10 + b2 % 10 + rem) % 2;
        rem = (b1 % 10 + b2 % 10 + rem) / 2;
        b1 = b1 / 10;
        b2 = b2 / 10;
    }

    (rem != 0) ? sum[i++] = rem : 0; 
    --i;
    
    printf("Sum of two binary numbers: ");
    
    while (i >= 0)
        printf("%d", sum[i--]);
    return 0;
    
}

/* Input: 100000
          101010
   Output: Sum of two binary numbers: 1001010
*/