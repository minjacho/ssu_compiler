NAME = minjae_syntax.out
LEX_SRC = minjae_syntax.l
YACC_SRC = minjae_syntax.y
SRCS = ssu_syntax.c ssu_semantic.c y.tab.c lex.yy.c main.c print.c print_sem.c
OBJS = $(SRCS:.c=.o)
CC = gcc -w -m32
YACC = yacc -d
LEX = lex

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $^ -o $(NAME)

%.o : %.c
	$(CC) -c $<

y.tab.c : $(YACC_SRC)
	$(YACC) $^

lex.yy.c : $(LEX_SRC)
	$(LEX) $^

clean :
	rm -f $(OBJS) y.tab.c lex.yy.c y.tab.h

fclean : clean
	rm -f $(NAME)

re : fclean
	make all
