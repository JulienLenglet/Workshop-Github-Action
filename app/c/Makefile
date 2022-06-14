##
## EPITECH PROJECT, 2022
## lemin
## File description:
## Makefile
##

SRC	=	src/main.c	\
		src/open_file.c	\
		src/get_ant.c	\
		src/get_ant2.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	lem_in

CC	=	gcc

CPPFLAGS += -I ./include -I ./lib/my -g

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	$(CC) -o $(NAME) $(OBJ) -L./lib -lmy
	make clean
	make clean -C lib/my

clean:
	$(RM) $(OBJ)
test_run :
	echo "wow"

fclean:	clean
	make -C lib/my fclean
	$(RM) $(NAME);

re:	fclean all

.PHONY:	all clean fclean re test_run
