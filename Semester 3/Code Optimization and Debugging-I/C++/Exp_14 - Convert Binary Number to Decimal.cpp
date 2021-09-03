// C++ Program to Convert Binary Number to Decimal and vice-versa.
/*
1. The user is asked to enter a binary number and it is stored in the variable ‘num’.
2. The variable ‘b’ is initialized as 1 and ‘dec’ as 0. num is copied to the variable ‘temp’.
3. Using a while loop, modulus of temp is stored in ‘rem’.
4. rem is multiplied with b and added to dec.
5. In every iteration, b is multiplied with 2.
6. The loop continues till temp is less than 0.
7. The decimal equivalent is stored in dec and printed.
*/

#include<bits/stdc++.h>
using namespace std;
string decimalToBinary(int n)
{
    string s= bitset<64> (n).to_string();
    const auto loc1 = s.find('1');
    if(loc1 !=string::npos)
      return s.substr(loc1);
    return "0";  
}
int binaryToDecimal(int n)
{
    int num=n;
    int dec_value=0;
    int base=1;
    int temp=num;
    while(temp)
    {
        int last_digit=temp%10;
        temp=temp/10;
        dec_value+=last_digit*base;
        base=base*2;
        
    }
    return dec_value;
}

int main()
{
    int n=23;
    cout<<"Binary form of 23 is "<< decimalToBinary(n)<<endl;
    int num= 10101;
    cout<<"Decimal form of 10101 is "<<binaryToDecimal(num)<<endl;
    return 0;
}

// Input: 
// Binary form of 23 is 10111
// Decimal form of 10101 is 21

// Output: 
// Binary form of 23 is 10111
// Decimal form of 10101 is 21