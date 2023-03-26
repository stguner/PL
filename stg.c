#include <stdio.h>
#include "stg.h"

extern int yylex();
extern int yylineno;
extern char* yytext;
TOKENS

int main (void) {
    int token = yylex();
    while(token) {
        printf("Token %s is on line %d, value is %s\n",text[token],yylineno,yytext);
        token = yylex();
    }
    return 0;
}

