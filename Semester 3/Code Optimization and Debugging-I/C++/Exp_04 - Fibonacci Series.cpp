//  C++ Program to print the Fibonacci Series.

// Eg:
// n = 8
// 0 1 1 2 3 5 8 13

#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "";
    cin >> n;

    cout << "";

    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << t1 << " ";
            continue;
        }
        if(i == 2) {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << " ";
    }
    return 0;
}

// (1)
// Input: 8
// Output: 0 1 1 2 3 5 8 13

// (2)
// Input: 10
// Output: 0 1 1 2 3 5 8 13 21 34
