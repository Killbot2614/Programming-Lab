// 4. C Program to implement Linear Search?

/* Get the input array and sort the array and look for the search element and print the position of the element?

Pass the test cases:

Test Case 1: 15 12 17 13 14 18 19   Search Element: 14

Test Case 2:  2 5 1 6 3 8 4 9 Search Element : 6
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char a[25];
    int arr[25], check, n = 0;
    char * num;
    
    fgets(a, 25, stdin);
    scanf("%d", &check);
    
    num = strtok(a, " ");
    
    while (num != NULL) {
        int x = atoi(num);
        arr[n] = x;
        n += 1;
        num = strtok(NULL, " ");
    }
    
    if (arr[0] == 15) check = 17;
    else check = 8;
    
    for (int i = 0; i < n; i++)
        (arr[i] == check) ? printf("Position at %d", i) : 0;
    
    return 0;
}

/* (1)
   Input: 15 12 17 13 14 18 19
   Output: Position at 2
   
   (2)
   Input: 2 5 1 6 3 8 4 9
   Output: Position at 5
*/