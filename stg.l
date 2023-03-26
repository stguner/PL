%{
#include "stg.h"
%}
%%
"(" return POPEN;
")" return PCLOSE;
"[-]?[0-9]+" return INTEGER;
"[-]?[0-9]+\.[0-9]+" return DOUBLE;
"[" return ARROPEN;
"]" return ARRCLOSE;
"{" return CUROPEN;
"}" return CURCLOSE;
"+" return PLUS;
"*" return MULTIPLY;
"-" return MINUS;
"/" return DIVIDE;
"%" return MOD;
"++" return PLUSPLUS;
"--" return MINUSMINUS;
"=" return EQUAL;
"," return COMMA;
"+=" return PLUSEQUAL;
"-=" return MINUSEQUAL;
"*=" return MULTIPLYEQUAL;
"/=" return DIVIDEEQUAL;
"?=" return ISEQUAL;
"!=" return NOTEQUAL;
">=" return GANDE;
"<=" return LANDE;
">" return GREATER;
"<" return LESS;
"|" return OR;
"&" return AND;
"if" return IF;
"else" return ELSE;
"func" return FUNC;
"loop" return LOOP;
"print" return PRINT;
"int"|"double"|"str"|"bool" return PRIMITIVETYPES;
"true|false" return BOOL;
[a-zA-Z_][a-zA-Z0-9_]* return IDENTIFIER;
.			printf("Syntax Error!");
%%

int yywrap (void){
    return 1;
    }