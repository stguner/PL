# Programming Language STG
Group Members: Süleyman Türker GÜNER <br/>
I am alone to do this assignment.
## Syntax

\<prog\> : \<stmt\> | \<stmts\> <br/>
\<stmts\> : \<stmt\> | \<stmt\>;\<stmts\> <br/>
\<stmt\> : \<expr\> <br/>
\<logOp\> : \<or\> | \<and\> | \<smaller\>  | \<greater\>  | \<greaterEqual\> | \<smallerEqual\>  | \<notEqual\> | \<equal\> <br/>
\<mathOp\> : \<increasing\> | \<decreasing\> | \<pow\> | \<modding\> | \<division\> | \<multiplication\> | \<addition\> | \<subtraction\> <br/>
\<increasing\> : \<expr\> `++` \<expr\>  <br/>
\<decreasing\> : \<expr\> `--` \<expr\> <br/>
\<pow\> : \<expr\> `^` \<expr\> <br/>
\<modding\> : \<expr\> `%` \<expr\> <br/>
\<division\> : \<expr\> `/` \<expr\> <br/>
\<multiplication\> : \<expr\> `*` \<expr\> <br/>
\<addition\> : \<expr\> `+` \<expr\> <br/>
\<subtraction\> : \<expr\> `-` \<expr\> <br/>
\<or\> : \<expr\> `|` \<expr\> <br/>
\<and\> : \<expr\> `&` \<expr\> <br/>
\<smaller\> : \<expr\> `<` \<expr\> <br/>
\<greater\> : \<expr\> `>` \<expr\> <br/>
\<greaterEqual\> : \<expr\> `>=` \<expr\> <br/>
\<smallerEqual\> : \<expr\> `<=` \<expr\> <br/>
\<notEqual\> : \<expr\> `!=` \<expr\> <br/>
\<equal\> : \<expr\> `==` \<expr\> <br/>
IF : if <br/>
BOOL : true|false <br/>
FUNC : func <br/>
WHILE : while <br/>

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
