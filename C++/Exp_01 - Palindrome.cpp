//  C++ Program to find whether the given number is palindrome or not?

// Get an input form the user.
// Store that input value in a temporary variable.
// Find the reverse of the input value.
// Compare both values' reverse and temporary variables.
// If both values match print it is a palindrome

#include <iostream>
using namespace std;

int main()
{
    int num,digit, rev = 0;
    
    cin >> num;
    
    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }while (num !=0);    
        
    
    cout << rev << endl;
    
    return 0;
}

// Input: 1234321

// Output: 1234321