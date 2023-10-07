all : y.tab.c lex.yy.c
	cc y.tab.c lex.yy.c
y.tab.c : minjae.y
	yacc -d minjae.y
lex.yy.c : minjae.l
	lex minjae.l
re : minjae.y minjae.l
	yacc -d minjae.y
	lex minjae.l
	cc y.tab.c lex.yy.c
