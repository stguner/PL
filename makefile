stg: lex.yy.c y.tab.c
		gcc -g lex.yy.c y.tab.c -o stg

lex.yy.c: y.tab.c stg.l
		lex stg.l

y.tab.c: stg.y
		yacc -d stg.y

clean: 
		rm -rf lex.yy.c y.tab.c y.tab.h stg stg.dSYM