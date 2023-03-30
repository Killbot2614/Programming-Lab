/*Aim: To create a program to implement symbol table using C

Algorithm:
1.Get input from user
2.Allocate memory for the variable
3.Input symbol is inserted into symbol table along with its memory address
4.Repeat until '$' is reached
*/

//Program:
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void main()
{
    int i = 0, j = 0, x = 0, n;
    void* p, * add[5];
    char ch, srch, b[15], d[15], c;
    printf("Expression terminated by $:");
    while ((c = getchar()) != '$')
    {
        b[i] = c;
        i++;
    }
    n = i - 1;
    printf("Given Expression:");
    i = 0;
    while (i <= n)
    {
        printf("%c", b[i]);
        i++;
    }
    printf("\n Symbol Table\n");
    printf("\nSymbol \t addr \t type");
    while (j <= n)
    {
        c = b[j];
        if (isalpha(toascii(c)))
        {
            p = malloc(c);
            add[x] = p;
            d[x] = c;
            printf("\n%c \t %d \t identifier\n", c, p);
            x++;
            j++;
        }
        else
        {
            ch = c;
            if (ch == '+' || ch == '-' || ch == '*' || ch == '=')
            {
                p = malloc(ch);
                add[x] = p;
                d[x] = ch;
                printf("\n %c \t %d \t operator\n", ch, p);
                x++;
                j++;
            }
        }
    }
}


/*Output:
>gcc Noname4.c
>a.exe

Expression terminated by $:A=B*C$
Given Expression:A=B*C
 Symbol Table

Symbol   addr    type
A        6755776         identifier

 =       6755856         operator

B        6763280         identifier

 *       6763360         operator

C        6763416         identifier
*/