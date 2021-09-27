// C++ Program to Check Leap Year

// All years which are perfectly divisible by 4 are leap years except for century years (years ending with 00) which is leap year only it is perfectly divisible by 400

#include <iostream>
using std::cout;
using std::string;

int main() {
    int year = 2014;
    (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) ? cout << year << " is a leap year." : cout << year << " is not a leap year.";
    
    return 0;
}

/* Input: 2014 is not a leap year.
*/