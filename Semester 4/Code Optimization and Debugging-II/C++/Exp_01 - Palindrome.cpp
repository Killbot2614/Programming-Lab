// 1.C++ Program to find whether the given number is palindrome or not?

/*(i)Using Any Loops

(ii)Input must be an integer

(iii)Get the input value and reverse it then compare with the original value 

(iv)If both are equal then the inputted number is palindrome.
*/

#include <iostream>
using namespace std;

int main() {
    int num, rev = 0, digit;
    cin >> num;
    do {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);    
    cout << rev << " is a palindrome" << "\n";
    return 0;
}

// Input: 1001

// Output: 1001 is a palindrome
