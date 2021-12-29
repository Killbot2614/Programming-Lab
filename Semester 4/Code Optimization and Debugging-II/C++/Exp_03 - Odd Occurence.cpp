// 3.C++ program to find the number occurring odd number of times?

/*Pass these test cases.

1) Input: 10,20,30,40,10,20,30 

2)Input:1,4,7,2,4,7,1,2,7
*/

#include <iostream>

using std::cout;
using std::cin; 

int oddOccurrence(int arr[], int arr_size) {
    for (int i = 0; i < arr_size; i++) {
        int count = 0;
        for (int j = 0; j < arr_size; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        
        if (count % 2 != 0)
            return arr[i];
    }
    return 0;
}
 
int main() {
    int arr[10]; 
    for(int i = 0; i < 10;i++) {
        cin >> arr[i];
    } 
        int n = sizeof(arr) / sizeof(arr[0]);
        cout << oddOccurrence(arr, n);
        return 0;
}

/* (1) 
   Input: 10 20 30 40 10 20 30
   Output: 40
   
   (2)
   Input: 1 4 7 2 4 7 1 2 7
   Output:7
*/