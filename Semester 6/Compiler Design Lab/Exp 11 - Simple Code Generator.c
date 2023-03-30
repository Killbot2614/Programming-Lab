/*Aim: To create a C program to implement a simple code generator

Algorithm:
1.Include required libraries
2.Declare stacks 'stack' and 'stack1'
3.Declare functions 'push' and 'pop'
4.In main, declare 2 character arrays 'infix' and 'postfix'
5.If current character is an alphabet, push to stack. If its an operator, pop 2 elements from stack and print corresponding 3AC code for the operation
*/

//Program:
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define SIZE 100
char stack[SIZE], stack1[SIZE];
int top = -1, k = 1;
void push(char item) {
	if (top >= SIZE - 1) {
		printf("\nStack Overflow.");
	}
	else {
		top = top + 1;
		stack[top] = item;
	}
}
char pop() {
	char item;
	if (top < 0) {
		printf("stack under flow: invalid infix expression");
		getchar();
		exit(1);
	}
	else {
		item = stack[top];
		top = top - 1;
		return(item);
	}
}
int is_operator(char symbol) {
	if (symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol == '-') {
		return 1;
	}
	else return 0;
}
int precedence(char symbol) {
	if (symbol == '^') {
		return(3);
	}
	else if (symbol == '*' || symbol == '/') {
		return(2);
	}
	else if (symbol == '+' || symbol == '-') {
		return(1);
	}
	else return(0);
}
void InfixToPostfix(char infix_exp[], char postfix_exp[]) {
	int i = 0, j = 0;
	char item, x;
	push('(');
	strcat(infix_exp, ")");
	item = infix_exp[i];
	while (item != '\0') {
		if (item == '(') {
			push(item);
		}
		else if (isdigit(item) || isalpha(item)) {
			postfix_exp[j] = item;
			j++;
		}
		else if (is_operator(item) == 1) {
			x = pop();
			while (is_operator(x) == 1 && precedence(x) >= precedence(item)) {
				postfix_exp[j] = x;
				j++;
				x = pop();
			}
			push(x);
			push(item);
		}
		else if (item == ')') {
			x = pop();
			while (x != '(') {
				postfix_exp[j] = x;
				j++;
				x = pop();
			}
		}
		else {
			printf("\nInvalid infix Expression.\n");
			getchar();
			exit(1);
		}
		i++;
		item = infix_exp[i];
	}
	if (top > 0) {
		printf("\nInvalid infix Expression.\n");
		getchar();
		exit(1);
	}
	postfix_exp[j] = '$';
	postfix_exp[j + 1] = '\0';
}
int main()
{
	char infix[SIZE], postfix[SIZE], x, y;
	int i = 0;
	printf("\nEnter Infix expression : ");
	gets(infix);
	InfixToPostfix(infix, postfix);
	printf("Postfix Expression: ");
	puts(postfix);
	while (postfix[i] != '$') {
		if (isalpha(postfix[i])) {
			push(postfix[i]);
		}
		else if ((postfix[i] == '+') || (postfix[i] == '-') || (postfix[i] == '/')
			|| (postfix[i] == '*') || (postfix[i] == '^')) {
			x = pop();
			y = pop();
			if (x == 't') {
				printf("%c %c t%d t%d\n", postfix[i], y, k, k + 1);
				k++;
			}
			else if (y == 't') {
				printf("%c t%d %c t%d\n", postfix[i], k, x, k + 1);
				k++;
			}
			else printf("%c %c %c t%d\n", postfix[i], y, x, k);
			push('t');
		}
		i++;
	}
	return 0;
}

/*Output:
>gcc Noname4.c
>a.exe
Enter Infix expression : a+b*c-d
Postfix Expression: abc*+d-$
* b c t1
+ a t1 t2
- t2 d t3
*/