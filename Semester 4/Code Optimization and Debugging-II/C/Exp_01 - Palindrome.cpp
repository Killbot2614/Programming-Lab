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