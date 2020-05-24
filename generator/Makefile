##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## compile
##

SRC_DIR	=	src/
INC_DIR	=	include/

TARGET	=	generator

CFLAGS	=	-g -Wall -Wextra -I $(INC_DIR)

SRC	=	$(SRC_DIR)main.c	\
		$(SRC_DIR)algorithm.c	\
		$(SRC_DIR)perfect.c	\
		$(SRC_DIR)my_strcmp.c \
		$(SRC_DIR)generate.c	\
		$(SRC_DIR)malloc.c

OBJ	=	$(SRC:.c=.o)

RM	=	rm -f

all:	$(TARGET)

# `make` normal
$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ) $(CFLAGS)

# `make clean` clean lib/*.o + projet
clean:
	$(RM) $(OBJ)

# `make clean` clean + binary/library
fclean: clean
	$(RM) $(TARGET)

re:	fclean all

.PHONY: all clean fclean re
