%{
void yyerror (char *s);     /* C declarations used in actions */
int yylex();
#include <stdio.h>  
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
char* s = "";
int value = 0;
int if_value = 1;
int funcval = 1;
int symbols[52];
int symbolVal(char symbol);
void updateSymbolVal(char symbol, int val);
void functionCall(char symbol);
void functionExp(char symbol);
%}

%union {int num; char id;}    /* yacc definitions */
%start line
%token print
%token exit_command
%token assign
%token plusplus minusminus lessthan greaterthan isequal notequal and or not true false lessorequal greatorequal onelinecomment multilinecomment iff elsee func
%token <num> number
%token <id> identifier
%type <num> line expression term statements logicalexpression arithmeticexpression ifexpression boolean sts
%type <num> printstatement plusplusminusminusstatement assignmentstatement comment ifstatement ifstatements ifsts elsestatement elsestatements elsests ifelsestatement
%type <num> functionstatement functioncallstatement functionstates functionsts funcexp
%type <id> assignment

%% /* decription of expected inputs           corresponding actions */

line    : statements
        | line statements
        ;

statements	: printstatement
			| plusplusminusminusstatement
            | assignmentstatement
			| ifelsestatement
			| comment
			| functionstatement
			| functioncallstatement
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
		;

ifelsestatement : 
			ifstatement 
		  | ifstatement elsestatement
	;

ifstatement	: ifexpression '{' ifstatements '}' 	{if(if_value == 1) $$ = value;}
		;

ifexpression	: iff '(' logicalexpression ')'  	{if_value = $3;}
		| iff '(' identifier ')'  	{if_value = symbolVal($3);}
		;

ifstatements	: 
		  sts
		| ifsts
		| ifstatements sts
		| ifstatements ifsts
	;

sts		: term '+' term ';' 		{value = $1 + $3;}
		| term '-' term ';' 		{value = $1 - $3;}
		| term '*' term ';' 	{value = $1 * $3;} 
		| term '/' term ';' 		{value = $1 / $3;}
		| term '%' term ';' 		{value = $1 % $3;}
		| boolean and boolean ';' 	{value = $1 && $3;}
		| boolean or boolean ';' 	{value = $1 || $3;}
		| term greaterthan term ';' 			{value = $1 > $3 ? 1 : 0;}
		| term lessthan term ';' 			{value = $1 < $3 ? 1 : 0;}	
		| term greatorequal term ';' 		{value = $1 >= $3 ? 1 : 0;}	
		| term lessorequal term ';' 		{value = $1 <= $3 ? 1 : 0;}
		| term isequal term ';' 			{value = $1 == $3 ? 1 : 0;}
		| term notequal term ';' 		{value = $1 != $3 ? 1 : 0;}
		| boolean isequal boolean ';' 	{value = $1 == $3 ? 1 : 0;}
		| boolean notequal boolean ';' 	{value = $1 != $3 ? 1 : 0;}
		| not boolean ';' 			{value = !$2;}
		| boolean ';' 				{value = $1;}
		| term ';' 					{value = $1;}
	;

ifsts	: identifier '=' sts 	{if(if_value == 1) updateSymbolVal($1,value);}
		| print sts 			{if(if_value == 1) printf("Printing %d\n",value);}
		| ifelsestatement 		{;}
		| plusplusminusminusstatement
	;

elsestatement	: elsee '{' elsestatements '}'	{if(if_value == 0) $$ = value;}
	;

elsestatements	: sts
		| elsests
		| elsestatements sts
		| elsestatements elsests
	;

elsests	: identifier '=' expression 	{if(if_value == 0) updateSymbolVal($1,value);}
		| print sts 			{if(if_value == 0) printf("Printing %d\n",value);}
		| ifelsestatement 		{;}
		| plusplusminusminusstatement
	;

functionstatement : funcexp '{' functionstates '}' {if(funcval == 1) $$ = value;}
	;

funcexp	: func identifier '(' ')' {functionExp($2);}
	;

functioncallstatement : identifier '(' ')' ';' {functionCall($1);} 
	;	

functionstates : sts
		| functionsts
		| functionstates sts
		| functionstates functionsts
	;

functionsts	: identifier '=' sts 	{if(funcval == 1) updateSymbolVal($1,value);}
		| print sts 			{if(funcval == 1) printf("Printing %d\n",value);}
		| ifelsestatement 					{;}
		| plusplusminusminusstatement 		{;}
		| functioncallstatement				{;}

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

void functionCall(char symbol) {
	if (symbolVal(symbol) == -1) {
		funcval = 1;
		printf("%d\n", value);
		printf("%s\n", s);
	} else {
		printf("Function is not defined \n");
	}
}

void functionExp(char symbol)
{
	if(symbolVal(symbol) == -1){
		printf("The function already exists.\n");
	}
	if(symbolVal(symbol) != -1){
		updateSymbolVal(symbol, -1);	
	}	
}
