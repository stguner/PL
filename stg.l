%{
#include "y.tab.h"
void yyerror(char *s);
int yylex();
%}
%%
"print" {return print;}
"exit" {return exit_command;}

"++" {return plusplus;}
"--" {return minusminus;}
"==" {return isequal;}
"!=" {return notequal;}
">=" {return greatorequal;}
"<=" {return lessorequal;}
">" {return greaterthan;}
"<" {return lessthan;}

[a-zA-Z] {yylval.id = yytext[0]; return identifier;}
[0-9]+ {yylval.num = atoi(yytext); return number;} 

[ \t\n\r]		;
[-/*+=;%]	{return yytext[0];}
"("        	{return *yytext;}
")"      	{return *yytext;}
"{"        	{return *yytext;}
"}"      	{return *yytext;}
","         {return *yytext;}
.		{ECHO; yyerror ("unexpected character");}

%%

int yywrap (void){
    return 1;
    }