// C Program to reverse a given number using Recursive function

// Input:  num
// (1) Initialize rev_num = 0
// (2) Loop while num > 0
//     (a) Multiply rev_num by 10 and add remainder of num  
//          divide by 10 to rev_num
//               rev_num = rev_num*10 + num%10;
//    (b) Divide num by 10
// (3) Return rev_num


#include<stdio.h>
int main()
{
    int num,rem,reverse_num=0;
    scanf("%d",&num);
    while(num>=1)
    {
        rem=num%10;
        reverse_num=reverse_num*10+rem;
        num=num/10;
        
    }
    printf("Reverse is : %d",reverse_num);
    return 0;
}

// (1)
// Input: 4562
// Output: Reverse is : 2654

// (2)
// Input: 1234
// Output: Reverse is : 4321

// (3)
// Input: 5006
// Output: Reverse is : 6005
