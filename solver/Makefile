##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

SRC	=	src/main.c	\
		src/get_maze.c	\
		src/solver.c	\
		src/check_maze.c	\
		lib/display_maze.c	\
		lib/my_getnbr.c	\
		lib/my_putchar.c	\
		lib/my_putstr.c	\
		lib/my_strlen.c

OBJ	=	$(SRC:.c=.o)

NAME	=	solver

all:	$(OBJ)
	gcc -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all NAME clean fclean re
