stg: stg.l
	lex stg.l
	gcc -o stg lex.yy.c -ll

clean:
	rm stg lex.yy.c
