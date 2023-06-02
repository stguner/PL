exampleprog1.stg: 
	@echo "\nThese are my example programs' outputs"
	@echo "\n Program name: printing_variables \n"
	@./stg < examples/variables.stg
	@echo "\n Program name: arithmeticexpressions \n"
	@./stg < examples/arithmeticexpressions.stg
	@echo "\n Program name: logicalexpressions \n"
	@./stg < examples/logicalexpressions.stg
	@echo "\n Program name: ifelsestatements \n"
	@./stg < examples/ifelsestatement.stg
	@echo "\n Program name: functions \n"
	@./stg < examples/functions.stg
	@echo "\n Program name: comments (It shows nothing because everyting i wrote everything in comment section\n"
	@./stg < examples/comment.stg

stg: lex.yy.c y.tab.c
		gcc -g lex.yy.c y.tab.c -o stg

lex.yy.c: y.tab.c stg.l
		lex stg.l

y.tab.c: stg.y
		yacc -d stg.y

clean: 
		rm -rf lex.yy.c y.tab.c y.tab.h stg stg.dSYM