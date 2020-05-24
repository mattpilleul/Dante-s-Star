##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

GENERATOR_DIR	=	$(realpath ./generator/)

SOLVER_DIR =	$(realpath ./solver/)

OBJ	=	$(SRC:.c=.o)

all:		build

build:		$(OBJ)
		$(MAKE) -C $(GENERATOR_DIR)
		$(MAKE) -C $(SOLVER_DIR)

clean:
		$(MAKE) -C $(GENERATOR_DIR) clean
		$(MAKE) -C $(SOLVER_DIR) clean
		rm -f $(OBJ)
		rm -f *~

fclean:		clean
		$(MAKE) -C $(GENERATOR_DIR) fclean
		$(MAKE) -C $(SOLVER_DIR) fclean
		rm -f *~

re:		fclean all

.PHONY:		make clean fclean re
