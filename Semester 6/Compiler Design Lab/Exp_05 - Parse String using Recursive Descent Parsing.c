/*Aim: To create a program to parse string using recursive descent parsing

Algorithm:
1.Initialize input string wiht '$' at the end
2.Read and store first character of input string
3.Call S() to start parsing process with A(()
4.Check if variable is equal to 'a'. If so, call match('a'). If not, return
5.In B(), check if 'l' is equal to 'b'. If so, call match('b') else print error and exit
6.Call A() again in S()
7.Repeat steps 3 to 6 until end of input string
8.Output results
*/

//Program:
#include<stdio.h>
#include <stdlib.h>
char l;
void match(char c)
   {
         if(l==c)
              l=getchar();
         else 
            {   
              printf("Invalid Input\n"); 
              exit(0);
            }
   }

void B()
  {
     if(l=='b')
        {
           match('b'); 
        }
     else 
        {   
           printf("Invalid Input\n"); 
           exit(0);
        }
  }

void A()
 {
    if(l=='a')
      {
        match('a');
        B();
      }
    else
        return;
  }

void S()
  {
    A();
    A();
  }

void main()
{    
    char input[10];
    printf("Enter String with $ at the end\n");
    l=getchar();
    S();
    if(l=='$')
           {
                 printf("\nParsing Successful\n");
           }
    else  
        {
           printf("Invalid Input\n");
        }
    
}

/*Output:
>gcc Noname4.c
>a.exe
Enter String with $ at the end
abab$

Parsing Successful
*/