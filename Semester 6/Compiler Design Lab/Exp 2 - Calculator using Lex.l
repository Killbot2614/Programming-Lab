/*Aim: To implement a calculator using lex tool

Algorithm:
1.In the headers section declare the variables that is used in the program including header files if necessary.
2.In the definitions section assign symbols to the function/computations we use along with REGEX expressions.
3.In the rules section assign dig() function to the dig variable declared.
4.In the definition section increment the values accordingly to the arithmetic functions respectively.
5.In the user defined section convert the string into a number using atof() function.
6.Define switch case for different computations.
7.Define the main () and yywrap() function.
*/

//Program:
%{
int a,b,flag=0;
%}
dig [0-9]*
add "+"
sub "-"
mul "*"
div "/"
%%
{dig} {dig();}
{add} {flag=1;}
{sub} {flag=2;}
{mul} {flag=3;}
{div} {flag=4;}
\n {printf("The answer is:%d\n",a);}
%%
dig()
{
    if(flag==0)
    {
	    a=atof(yytext);
    }
    else
    {
        b=atof(yytext);
        switch(flag)
        {
            case 1:
                a=a+b;
                break;
            case 2:
                a=a-b;
                break;
			case 3:
                a=a*b;
                break;
            case 4:
                a=a/b;
                break;
        }
    }
}
int main()
{
    yylex();
    return 0;
}
int yywrap(void) {}

/*Output:
6+7
The answer is:13
*/