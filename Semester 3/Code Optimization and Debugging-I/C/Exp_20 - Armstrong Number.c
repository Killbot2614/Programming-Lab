// C Program to check Armstrong number.

// A number is called as Armstrong number if sum of cubes of digits of number is equal to the number itself. In the below C program, we are checking whether the input number is Armstrong or not

#include <stdio.h>

int main() {
    int num = 370, temp, rem, result = 0;
    temp = num;

    while (temp != 0) {
        rem = temp % 10;
        result += rem * rem * rem;
        temp /= 10;
    }

    (result == num) ? printf("%d is an Armstrong Number", num) : printf("%d is not an Armstrong Number", num);
    
    return 0;
}

// Output: 370 is an Armstrong Number