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
%option noyywrap
%{
  #include<stdio.h>
  #include"y.tab.h"
  void yyerror(char *s);
  extern int yylval;
%}
digit[0-9]
%%
{digit}+ {yylval=atoi(yytext);return NUM;}
[-+*/\n] {return *yytext;}
\( {return *yytext;}
\) {return *yytext;}
.  {yyerror("syntax error");}
%%

/*Output:
2+3
5
2 3
syntax error
*/

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