# Programming Language STG
Group Members: Süleyman Türker GÜNER
I am alone to do this assignment.

## Syntax

\<prog\> : \<stmt\> | \<stmts\>
\<stmts\> : \<stmt\> | \<stmt\>;\<stmts\>
\<stmt\> : \<expr\> 
\<logOp\> : \<or\> | \<and\> | \<smaller\>  | \<greater\>  | \<greaterEqual\> | \<smallerEqual\>  | \<notEqual\> | \<equal\> 
\<mathOp\> : \<increasing\> | \<decreasing\> | \<pow\> | \<modding\> | \<division\> | \<multiplication\> | \<addition\> | \<subtraction\>
\<increasing\> : \<expr\> `++` \<expr\> 
\<decreasing\> : \<expr\> `--` \<expr\> 
\<pow\> : \<expr\> `^` \<expr\> 
\<modding\> : \<expr\> `%` \<expr\> 
\<division\> : \<expr\> `/` \<expr\>
\<multiplication\> : \<expr\> `*` \<expr\>
\<addition\> : \<expr\> `+` \<expr\>
\<subtraction\> : \<expr\> `-` \<expr\>
\<or\> : \<expr\> `|` \<expr\>
\<and\> : \<expr\> `&` \<expr\>
\<smaller\> : \<expr\> `<` \<expr\>
\<greater\> : \<expr\> `>` \<expr\>
\<greaterEqual\> : \<expr\> `>=` \<expr\>
\<smallerEqual\> : \<expr\> `<=` \<expr\>
\<notEqual\> : \<expr\> `!=` \<expr\>
\<equal\> : \<expr\> `==` \<expr\>
IF : if
BOOL : true|false
FUNC : func
WHILE : while 

## Explanations about the language
- Stg is designed for software developers. They can easily write their codes in stg language.
- The language has `print` keyword which is used to printing.
- The language has `if` keyword which is execute block of code(s) if specified condition is true.
- The language has `else` keyword which is execute block of code(s) if a condition is false in an if statement.
- The language has `while` keyword which is a control statement that allows code(s) to be execute again and again based on a given condition.
- The language has `int`,`double`,`str`,`bool` keywords which is represents integers, floating point numbers, characters and logical propositions.
- Takes a file with extension .stg
- You can run your program by running the makefile and giving it to myprog as input:
make
./stg < example.stg
