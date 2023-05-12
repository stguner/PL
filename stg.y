%{
void yyerror (char *s);     /* C declarations used in actions */
int yylex();
#include <stdio.h>  
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
char* s = "";
int value = 0;
int whileval = 1;
int if_value = 1;
int funcval = 1;
int num1, num2;
int symbols[52];
int symbolVal(char symbol);
void updateSymbolVal(char symbol, int val);
%}

%union {int num; char id;}    /* yacc definitions */
%start line
%token print
%token exit_command
%token assign
%token plusplus minusminus lessthan greaterthan isequal notequal and or not true false lessorequal greatorequal onelinecomment multilinecomment
%token <num> number
%token <id> identifier
%type <num> line expression term statements logicalexpression arithmeticexpression boolean
%type <num> printstatement plusplusminusminusstatement assignmentstatement comment
%type <id> assignment

%% /* decription of expected inputs           corresponding actions */

line    : statements
        | line statements
        ;

statements	: printstatement
			| plusplusminusminusstatement
            | assignmentstatement
			| comment
			;

printstatement	: print expression ';'		        {printf("Result: %d\n", $2);}
		;

expression		: arithmeticexpression				{$$ = $1;}
		| logicalexpression				            {$$ = $1;}
		;

arithmeticexpression	: 
        term 						                {$$ = $1;}
		| arithmeticexpression '+' term  			{$$ = $1 + $3;}
		| arithmeticexpression '-' term 			{$$ = $1 - $3;}
		| arithmeticexpression '*' term 			{$$ = $1 * $3;} 
		| arithmeticexpression '/' term 			{$$ = $1 / $3;}
		| arithmeticexpression '%' term 			{$$ = $1 % $3;}
		;

logicalexpression	:
		 logicalexpression and boolean 					            {$$ = $1 && $3;}
		| logicalexpression or boolean  					        {$$ = $1 || $3;}
		| arithmeticexpression greaterthan arithmeticexpression 		{$$ = $1 > $3 ? 1 : 0;}
		| arithmeticexpression lessthan arithmeticexpression 		{$$ = $1 < $3 ? 1 : 0;}	
		| arithmeticexpression greatorequal arithmeticexpression 	{$$ = $1 >= $3 ? 1 : 0;}	
		| arithmeticexpression lessorequal arithmeticexpression 	{$$ = $1 <= $3 ? 1 : 0;}
		| arithmeticexpression isequal term 				        {$$ = $1 == $3 ? 1 : 0;}
		| arithmeticexpression notequal term				        {$$ = $1 != $3 ? 1 : 0;}
		| logicalexpression isequal boolean 				        {$$ = $1 == $3 ? 1 : 0;}
		| logicalexpression notequal boolean 			            {$$ = $1 != $3 ? 1 : 0;}
		| not boolean								                {$$ = !$2;}
		| boolean								                    {$$ = $1;}
       	;

boolean	: true				{$$ = 1;}
		| false				{$$ = 0;}
       	;

term   	: number                {$$ = $1;}
		| identifier			{$$ = symbolVal($1);} 
        ;

plusplusminusminusstatement :
		  plusplus identifier ';'		{updateSymbolVal($2,symbolVal($2) + 1);}
		| minusminus identifier ';'		{updateSymbolVal($2,symbolVal($2) - 1);}
	;

assignmentstatement : assignment ';'		{;}
		;

assignment	: identifier '=' expression	{updateSymbolVal($1,$3); }
			;

comment : onelinecomment        	{$$ = -1;}
		|  multilinecomment			{$$ = -1;}

%%

/* C code */

int computeSymbolIndex(char token)
{
    int idx = -1;
    if(islower(token)) {
        idx = token - 'a' + 26;
    }else if(isupper(token)) {
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
    int i;
    for(i=0;i<52;i++) {
        symbols[i] = 0;
    }
    return yyparse ( );
}

void yyerror (char *s) 
{
    fprintf (stderr, "%s\n", s);
}
