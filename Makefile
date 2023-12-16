all :
	make interpreter
	make syntax

interpreter : 
	make -C interpreter
	
syntax :
	make -C syntax

clean :
	make -C interpreter clean
	make -C syntax clean

fclean :
	make -C interpreter fclean
	make -C syntax fclean

re :
	make -C syntax re
	make -C interpreter re

test : 
	./syntax/minjae_syntax.out < test.c
	./interpreter/interp.out code.asm
