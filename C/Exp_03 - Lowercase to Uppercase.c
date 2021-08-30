//  C Program to convert lowercase string to uppercase string

// Get the string

// convert from lower to upper using for loop

#include<stdio.h>
#include<string.h>
int main(){
    char str[25];
    int i;
    scanf("%s",str);
    for(i=0;i<=strlen(str);i++){
        if(str[i]>=97&&str[i]<=122)
          str[i]=str[i]-32;
    }
    printf("%s",str);
    return 0;
}

// Input: sathyabama
// Output: SATHYABAMA
