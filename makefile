stg: stg.l
	lex stg.l
	gcc -o stg lex.yy.c -ll
	gcc -o stg lex.yy.c stg.c

clean:
	rm stg lex.yy.c
