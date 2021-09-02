// Java Program to reverse a given number using Recursive function

/** Input:  num
* (1) Initialize rev_num = 0
* (2) Loop while num > 0
*      (a) Multiply rev_num by 10 and add remainder of num
*           divide by 10 to rev_num
*                rev_num = rev_num*10 + num%10;
*      (b) Divide num by 10
* (3) Return rev_num
*/

#include <stdio.h>

int reverse(int , int );

int main()
{
    int number, result;
    scanf("%d", &number);
    result = reverse(number, 0);
    printf("Reverse is : %d", result);
    return 0;
}

int reverse(int num, int rev)
{
    if(num==0)
        return rev;
    else
        return reverse (num/10, rev*10 + num%10);
}

/** (1)
* Input: 4562
* Output: Reverse is : 2654

* (2)
* Input: 1234
* Output: Reverse is : 4321

* (3)
* Input: 5006
* Output: Reverse is : 6005
*/
