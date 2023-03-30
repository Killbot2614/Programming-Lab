//Aim: To implement program for parser using ambiguous grammar

/*Algorithm:
1.Include required header files and declare error handling and lexer function
2.Semantic actions are specified in C code to perform evaluation of expressions
3.Regular expression is used to match tokens in the input and return them to parser
4.In main, yyparse() is called to start the parsing process
5.If error is encountered, yyerror() is called
6.The program returns 0 to indicate completion
*/

//Program:
%{
	#include<stdio.h>
	void yyerror(char *);
	extern int yylex(void);
%}
%token NUM
%% 
S:
S E '\n'  {printf("%d \n",$2);}
|
;
E:
E '+' T		{$$=$1+$3;}
|E '-' T	{$$=$1-$3;}
|T		{$$=$1;}
T:
T '*' F		{$$=$1*$3;}
|T '/' F	{$$=$1/$3;}
|F		{$$=$1;}
F:
'(' E ')'	{$$=$2;}
|NUM		{$$=$1;} 
%%
void yyerror(char *s)
{
printf("%s",s);
}
int main()
{
yyparse();
return 0;
}


/*Output:
C:\Desktop>lex Noname2.l
C:\Desktop>yacc -d Noname3.y
Noname3.y: conflicts: 16 shift/reduce
C:\Desktop>cc lex.yy.c y.tab.c
C:\Desktop>a.exe
3+4
7
 2 2
syntax errorsyntax errorsyntax error
*/