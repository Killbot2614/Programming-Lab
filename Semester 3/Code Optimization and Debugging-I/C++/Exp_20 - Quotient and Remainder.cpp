//  C++ Program to Find Quotient and Remainder

/* the user is asked to enter two integers (divisor and dividend) and the quotient and the remainder of their division is computed.

   To compute quotient and remainder, both divisor and dividend should be integers.
*/

#include <iostream>
using std::cout;

int main()
{    
    int dividend = 13, divisor = 4,  quotient, rem;

    quotient = dividend / divisor;
    rem = dividend % divisor;

    cout << "Quotient = " << quotient << "\n" && cout<< "Remainder = " << rem;

    return 0;
}

/* Output: Quotient = 3
           Remainder = 1
*/