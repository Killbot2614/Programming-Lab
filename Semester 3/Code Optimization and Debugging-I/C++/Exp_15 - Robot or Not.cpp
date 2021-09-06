// This program confirms whether the user is a robot or not.

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char initCheck[10];
    int val;
    
    cin >> initCheck;
    val = strcmp("Yes", initCheck);
    
    string result = (val == 0) ? "You can't Proceed!" : "You're Welcome!\n";
    cout << result;
    
    return 0;
}

/* Input: Are You a Robot ?
          No

   Output: You're Welcome!
*/

	