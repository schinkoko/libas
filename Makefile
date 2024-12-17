#libas self-written standard C-library Makefile
CC = gcc
LINKER = ar
CFLAGS = -std=c98 -Wall -Wextra -Werror
LFLAGS = rcs
NAME = libas.a
SRC := $(wildcard *.c)
OBJ := $(SRC: .c=.o)

$(NAME): $(SRC)
	echo $(OBJ)
	$(CC) $(CFLAGS) -o $(OBJ) $(SRC)
	$(LINKER) $(LFLAGS) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re