# Programming Language STG
Group Members: Süleyman Türker GÜNER <br/>
I am alone to do this assignment.
## Syntax

\<line\> : 
\<statements\> | 
\<line\> \<statements\> <br/>

\<statements\> : 
\<printstatement\> | 
\<plusplusminusminusstatement\> | 
\<assignmentstatement\> | 
\<ifelsestatement\> | 
\<comment\> | 
\<functionstatement\> | 
\<functioncallstatement\> <br/>

\<printstatement\> : 
print \<expression\> `;` <br/>

\<expression\> : 
\<arithmeticexpression\> | 
\<logicalexpression\> <br/>

\<arithmeticexpression\> : 
\<term\> | 
\<arithmeticexpression\> `+` \<term\> | 
\<arithmeticexpression\> `-` \<term\> | 
\<arithmeticexpression\> `*` \<term\> | 
\<arithmeticexpression\> `/` \<term\> | 
\<arithmeticexpression\> `%` \<term\>  <br/>

\<logicalexpression\> : 
\<logicalexpression\> and \<boolean\> | 
\<logicalexpression\> or \<boolean\> | 
\<arithmeticexpression\> greaterthan \<arithmeticexpression\> | 
\<arithmeticexpression\> lessthan \<arithmeticexpression\> | 
\<arithmeticexpression\> greaterorequal \<arithmeticexpression\> | 
\<arithmeticexpression\> lessorequal \<arithmeticexpression\> | 
\<arithmeticexpression\> isequal \<boolean\> | 
\<arithmeticexpression\> notequal \<boolean\> | 
not \<boolean\> | 
\<boolean\><br/>

\<boolean\> : 
true | false <br/>

\<term\> : 
number |  identifier<br/>

\<plusplusminusminusstatement\> : 
plusplus identifier `;` |  minusminus identifier `;` <br/>

\<assignmentstatement\> : 
\<assignment\> `;` <br/>

\<assignment\> : 
identifier `=` \<expression\> <br/>

\<comment\> : 
onelinecomment | multilinecomment <br/>

\<ifelsestatement\> : 
\<ifstatement\> | 
\<ifstatement\> \<elsestatement\> <br/>

\<ifstatement\> : 
\<ifexpression\> `{` \<ifstatements\> `}`<br/>

\<ifexpression\> : 
iff `(` \<logicalexpression\> `)`<br/>

\<ifstatements\> : 
\<sts\> | 
\<ifsts\> | 
\<ifstatements\> \<sts\> | 
\<ifstatements\> \<ifsts\> <br/>

\<sts\> : 
\<term\> `+` \<term\> `;` | 
\<term\> `-` \<term\> `;` | 
\<term\> `*` \<term\> `;` | 
\<term\> `/` \<term\> `;` | 
\<term\> `%` \<term\> `;` | 
\<boolean\> and \<boolean\> `;` | 
\<boolean\> or \<boolean\> `;` | 
\<term\> greaterthan \<term\> `;` | 
\<term\> lessthan \<term\> `;` | 
\<term\> greatorequal \<term\> `;` |
\<term\> lessorequal \<term\> `;` |
\<term\> isequal \<term\> `;` |
\<term\> notequal \<term\> `;` |
\<boolean\> isequal \<boolean\> `;` |
\<boolean\> notequal \<boolean\> `;` |
not \<boolean\> `;` |
\<boolean\> `;` |
\<term\> `;` <br/>


\<ifsts\> : 
identifier `=` \<sts\> <br/> |
print \<sts\> |
\<ifelsestatement\> |
\<plusplusminusminusstatement\> <br/>

\<elsestatement\> : 
elsee `{` \<elsestatements\> `}` <br/>

\<elsestatements\> : 
\<sts\> | 
\<elsests\> |
\<elsestatements\> \<sts\> |
\<elsestatements\> \<elsests\> <br/>

\<elsests\> : 
identifier `=` \<expression\> |
print \<sts\> |
\<ifelsestatement\> |
\<plusplusminusminusstatement\> <br/>

\<functionstatement\> : 
\<funcexp\> `{` \<functionstates\> `}`<br/>

\<funcexp\> : 
func identifier `(` `)`<br/>

\<functioncallstatement\> : 
identifier `(` `)` `;` <br/>

\<functionstates\> : 
\<sts\> | 
\<functionsts\> |
\<functionstates\> \<sts\> |
\<functionstates\> \<functionsts\> <br/>

\<functionsts\> : 
identifier `=` \<sts\> |
print \<sts\> |
\<ifelsestatement\> |
\<plusplusminusminusstatement\> |
\<functioncallstatement\> <br/>


## Explanations about the language
- Stg is designed for software developers. They can easily write their codes in stg language.
- The language has `print` keyword which is used to printing.
- The language has `if` keyword which is execute block of code(s) if specified condition is true.
- The language has `else` keyword which is execute block of code(s) if a condition is false in an if statement.
- The language has logical expressions ( `<` , `>` , `<=` , `>=` , `==` and `!=`). You can use these for logical operations.
- The language has arithmetic expressions ( `++` , `--` , `+` , `-` , `*` , `/` and `%`). You can use these for arithmetic operations.
- The language has function (`function`). You can define a function and do the operations inside this function and you can execute this function by call it.
- The language has comments (`!!` and `!! for multiline comment -!` ). You can use comments for write irrevelant something inside the code. It divided into two as multiline comments and single line comments.
- The language has `boolean` for logical operations.
- Takes a file with extension .stg
- You can run your program by running the makefile and giving it to myprog as input:
make exampleprog1.stg
