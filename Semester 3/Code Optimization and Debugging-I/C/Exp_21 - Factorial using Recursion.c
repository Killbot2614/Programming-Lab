// C Program to find factorial of number using Recursion.

// finds the factorial of input number and displays the output on screen. We will use a recursive user defined function to perform the task. Here we have a function find_factorial that calls itself in a recursive manner to find out the factorial of input number

#include <stdio.h>


long int prod(int n) {
    return (n >= 1) ? (n * prod(n - 1)): 1;
}

int main() {
    int n = 4;
    printf("factorial of %d is: %ld", n, prod(n));
    return 0;
}


// Output: factorial of 4 is: 24
