##
## EPITECH PROJECT, 2022
## begin_project
## File description:
## Makefile
##

SRC	=	my_putchar.c	\
		my_putstr.c	\
		my_strlen.c	\
		my_strcmp.c	\
		my_strcpy.c	\
		my_revstr.c	\
		my_itoa.c	\
		my_putnbr.c	\
		my_swap.c	\
		my_str_to_word_array.c	\
		my_show_word_array.c	\
		my_free_tab.c	\
		my_get_nbr.c	\
		my_compute_power_rec.c	\
		my_is_prime.c	\
		my_find_prime_sup.c	\
		my_strcat.c	\
		my_printf.c	\
		check_flags.c	\
		my_putbase.c	\
		my_putbase_octal.c	\
		my_putstrprintable.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ..

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re:	fclean all

.PHONY:	all clean fclean re
