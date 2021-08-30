//  C++ program to reverse digits of a number Using Recursive function.

// Input:  num
// (1) Initialize rev_num = 0
// (2) Loop while num > 0
//     (a) Multiply rev_num by 10 and add remainder of num  
//          divide by 10 to rev_num
//               rev_num = rev_num*10 + num%10;
//     (b) Divide num by 10
// (3) Return rev_num


#include<iostream>
using namespace std;

int main()
{
    int num, digit, rev = 0;
    
    cin>>num;
    
    do
    {
        digit = num%10;
        rev =(rev*10)+digit;
        num=num/10;
    }while(num!=0);
    
    cout<<rev<<endl;
    
    return 0;
}

// Input: 4562
// Output: 2654