NAME = interp.out
LEX_SRC = interp.l
YACC_SRC = interp.y
SRCS = lib.c y.tab.c lex.yy.c interp.c
OBJS = $(SRCS:.c=.o)
CC = gcc -w -m32 #-g -fsanitize=address
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

fclean :
	make clean
	rm -f $(NAME)

re :
	make fclean
	make all

.PHONY : all clean fclean re
