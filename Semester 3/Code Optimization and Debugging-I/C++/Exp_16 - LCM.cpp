//  C++ Program to Find LCM

// To calculate the LCM (Lowest Common Multiple) of two integers using loops and decision making statements.

#include <iostream>
using std::cout;

int main() {
   int a = 12, b = 18, lcm;
   lcm = (a > b) ? a : b;
   while (1) {
      if (lcm % a == 0 && lcm % b == 0) {
         cout << "LCM = " << lcm;
         break;
      }
      lcm++;
   }
   return 0;
}

/* Output: LCM = 36
*/