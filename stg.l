%{
#include <stdio.h>
#include <stg.h>
%}
%%
[-]?[0-9]+                    return INTEGER; 
[-]?[0-9]+\.[0-9]+            return DOUBLE;
"("                            return POPEN; 
")"                             return PCLOSE; 
"["                             return ARROPEN; 
"]"                            return ARRCLOSE;
"{"                        return CUROPEN;
"}"                        return CURCLOSE;
"+"                        return PLUS; 
"*"                            return MULTIPLY;  
"-"                            return MINUS; 
"/"                            return DIVIDE;
"%"                            return MOD;
"++"                            return PLUSPLUS;
"--"                        return MINUSMINUS;
"^"                             return POW;
"="                            return EQUAL;
","                             return COMMA;
"+="                            return PLUSEQUAL;
"-="                            return MINUSEQUAL;
"*="                            return MULTIPLYEQUAL;
"/="                            return DIVIDEEQUAL;
"?="                            return ISEQUAL; 
"!="                            return NOTEQUAL; 
">="                            return GANDE;
"<="                            return LANDE;
">"                            return GREATER;
"<"                            return LESS;
"|"                             return OR; 
"&"                             return AND;
"if"                            return IF;
"else"                          return ELSE;
"func"                            return FUNC;
"loop"                        return LOOP;
"print"                         return PRINT;
"input"                     return INPUT;
"int"|"double"|"str"|"bool"     return PRIMITIVETYPES;
"true|false"                    return BOOL;
[a-zA-Z_][a-zA-Z0-9_]*            return IDENTIFIER; 
\"([^\\\"]|\\.)*\"              return STRING;
.			printf("Syntax Error!");
[ \t]                           {;}
(\r\n|\r|\n)                    {yylineno++;}  
"//".*                    {;}
%%
int yywrap (void) {return 1;}