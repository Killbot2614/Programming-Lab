//  C++ Program to Check Whether a Number can be Expressed as a Sum of Two Prime Numbers

/* This program takes a positive integer from the user and checks whether that number can be expressed as the sum of two prime numbers.

   If the number can be expressed as the sum of two prime numbers, the output shows the combination of the prime numbers.
*/

#include <iostream>
using std::cout;

int check(int num) {
   int i;
   int xyz = 1;
   for (i = 2; i <= num / 2; ++i) {
      if(num % i == 0) {
         xyz = 0;
         break;
      }
   }
   return xyz;
}
int main() {
   int num = 34 , i;
   for (i = 2; i <= num / 2; ++i) {
      if (check(i)) {
          if (check(num - i)) {
              cout << num << " = " << i << " + " << num - i << "\n";
         }
      }
   }
   return 0;
}

/* Output: 34 = 3 + 31
           34 = 5 + 29
           34 = 11 + 23
           34 = 17 + 17
*/