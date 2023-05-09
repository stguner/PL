%{
void yyerror (char *s);
#include <stdio.h> 
%inlcude <stdlib.h>
int symbols[52];
int symbolVal(char symbol);
void updateSymbolVal(char symbol, int val);
%}

%union {int num; char id;}    /* yacc definitions */
%start line
%token print
%token exit_command
%token <num> number
%token <id> identifier
%type <num> line exp term
%type <id> assignment

%% /* decription of expected inputs           corresponding actions */

line:   assignment ';'          {;}
    |   exit_command ';'        {exit(EXIT_SUCCESS);}
    |   print exp ';'           {printf("Printing %d\n", $2);}
    |   line assignment ';'     {;}
    |   line print exp ';'      {printf("Printing %d\n", $3);}
    |   line exit_command ';'   {exit(EXIT_SUCCESS)}
    ;

assignment : identifier '=' exp { updateSymbolVal($1,$3); }
    ;

exp :   term                     {$$ = $1;}
    |   exp '+' term             {$$ = $1 + $3;}
    |   exp '-' term             {$$ = $1 - $3;}
    ;

term:   number                   {$$ = $1;}
    |   identifier               {$$ = symbolVal($1);}
    ;

%%

/* C code */

int computeSymbolIndex(char token)
{
    int idx = -1;
    if(isLower(token)) {
        idx = token - 'a' + 26;
    }else if(isUpper(token)) {
        idx = token - 'A';
    }
    return idx;
}

/* returns the value of a given symbol */
int symbolVal(char symbol)
{
    int bucket = computeSymbolIndex(symbol);
    return symbols[bucket];
}

/* Updates the value of a given symbol */
void updateSymbolVal(char symbol, int val)
{
    int bucket = computeSymbolIndex(symbol);
    symbols[bucket] = val;
}

int main (void)
{   /* init symbol table */
    int i\
    for(i=0;i<52;i++) {
        symbols[i] = 0;
    }
    return yyparse ( );
}

void yyerror (char *s) 
{
    fprintf (stderr, "%s\n", s);
}