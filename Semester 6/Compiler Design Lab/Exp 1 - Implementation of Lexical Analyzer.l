/*Aim:To implement a program to identify C/C++ keywords, identifiers, operators and end statements

Algorithm:
1.In the flex (lex and yacc) tool, create a lex file.
2.In the C includes section, include the required header files.
3.In the rules section, define the rules through regex rules. Store the result in yytext and print the same.
4.In the user section, write the main function and call yylex().
5.Write yywrap() function for wrapping up. Return 1 if done and 0 if not done.
*/

//Program:
%{
    #include<stdio.h>
    #include<string.h>
%}
%%
#.* {printf("\n%s is a preprocessor", yytext);}
int|float|double|long {printf("\n%s is a keyword", yytext);}
[a-zA-Z][a-zA-Z0-9]* { printf("\n%s is an identifier", yytext);}
[0-9]+ {printf("\n%s is a digit", yytext);}
[=+/*%] {printf("\n%s is an operator", yytext);}
[(){}|,;] {printf("\n%s is an end statement", yytext);}
%%
int main ()
{
    yylex();
    return 0;
}
int yywrap(void)
{
}

/*Output:
Position = Initial + Rate * 30
Position is an identifier
= is an operator
Initial is an identifier
+ is an operator
Rate is an identifier
* is an operator
30 is a digit
*/