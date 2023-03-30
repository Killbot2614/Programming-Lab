/*Aim: To implement shift reduce parser using C program

Algorithm:
1.Get input expression and store it in input buffer
2.Read data from input buffer one at a time
3.Using stack, push and pop operation, shift and reduce symbols
4.Continue process until symbols shift and production rule reduce reaches the start symbol
5.Display the stack implementation
*/

//Program:
#include<stdio.h>
#include<string.h>
int k = 0, z = 0, i = 0, j = 0, c = 0;
char a[16], ac[20], stk[15], act[10];
void check();
int main()
{
	puts("GRAMMAR is E->E+E \n E->E*E \n E->(E) \n E->id");
	puts("enter input string ");
	scanf("%s", a);
	c = strlen(a);
	strcpy(act, "SHIFT->");
	puts("stack \t input \t action");
	for (k = 0, i = 0; j < c; k++, i++, j++)
	{
		if (a[j] == 'i' && a[j + 1] == 'd')
		{
			stk[i] = a[j];
			stk[i + 1] = a[j + 1];
			stk[i + 2] = '\0';
			a[j] = ' ';
			a[j + 1] = ' ';
			printf("\n$%s\t%s$\t%sid", stk, a, act);
			check();
		}
		else
		{
			stk[i] = a[j];
			stk[i + 1] = '\0';
			a[j] = ' ';
			printf("\n$%s\t%s$\t%ssymbols", stk, a, act);
			check();
		}
	}
}
void check()
{
	strcpy(ac, "REDUCE TO E");
	for (z = 0; z < c; z++)
		if (stk[z] == 'i' && stk[z + 1] == 'd')
		{
			stk[z] = 'E';
			stk[z + 1] = '\0';
			printf("\n$%s\t%s$\t%s", stk, a, ac);
			j++;
		}
	for (z = 0; z < c; z++)
		if (stk[z] == 'E' && stk[z + 1] == '+' && stk[z + 2] == 'E')
		{
			stk[z] = 'E';
			stk[z + 1] = '\0';
			stk[z + 2] = '\0';
			printf("\n$%s\t%s$\t%s", stk, a, ac);
			i = i - 2;
		}
	for (z = 0; z < c; z++)
		if (stk[z] == 'E' && stk[z + 1] == '*' && stk[z + 2] == 'E')
		{
			stk[z] = 'E';
			stk[z + 1] = '\0';
			stk[z + 1] = '\0';
			printf("\n$%s\t%s$\t%s", stk, a, ac);
			i = i - 2;
		}
	for (z = 0; z < c; z++)
		if (stk[z] == '(' && stk[z + 1] == 'E' && stk[z + 2] == ')')
		{
			stk[z] = 'E';
			stk[z + 1] = '\0';
			stk[z + 1] = '\0';
			printf("\n$%s\t%s$\t%s", stk, a, ac);
			i = i - 2;
		}
}

/*Output:
>gcc Noname4.c
>a.exe

GRAMMAR is E->E+E
 E->E*E
 E->(E)
 E->id
enter input string
id+id
stack    input   action

$id       +id$  SHIFT->id
$E        +id$  REDUCE TO E
$E+        id$  SHIFT->symbols
$E+id        $  SHIFT->id
$E+E         $  REDUCE TO E
$E           $  REDUCE TO E
*/