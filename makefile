stg: stg.l
	lex stg.l
	yacc -d stg.y
	gcc -o stg lex.yy.c -ll
	gcc -o stg lex.yy.c stg.c

clean:
	rm stg lex.yy.c
