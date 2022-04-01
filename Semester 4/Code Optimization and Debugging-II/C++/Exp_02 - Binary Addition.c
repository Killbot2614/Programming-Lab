// 2.C++ program for binary addition?

// Write in C program
// LMS compiler required C code

#include <stdio.h>

int findElement(int x[], int n) {
    for (int i = 0; i < n; i++) {    
        int tmp;
        for (int j = i+1; j < n; j++) {     
            if(x[i] > x[j]) {    
                tmp = x[i];    
                x[i] = x[j];    
                x[j] = tmp;    
            }     
        }     
    }        

    int max = 1, res = x[0], count = 1; 
    for (int i = 1; i < n; i++) { 
        if (x[i] == x[i - 1]) 
            count++; 
        else { 
            if (count > max) { 
                max = count; 
                res = x[i - 1]; 
            } 
            count = 1; 
        } 
    }   
    
    if (count > max) { 
        max = count; 
        res = x[n - 1]; 
    }   
    return res;
}

int main()
{
    int n;              
    n = 7;    
    int array[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d",&array[i]);
    }
	
    int element = findElement(array, n);
    printf("%d",element);
    return 0;
}

/* (1)
   Input: 10 20 30 10 20 30 10
   Output: 10
   
   (2)
   Input: 15 12 15 14 16 15
   Output: 15
   
   (3)
   Input: 5 8 6 3 6 9 6
   Output: 6
*/
