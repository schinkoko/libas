#libas - self-written standard C-library Makefile
COMPILER = cc
CFLAGS = -Wall -Wextra -Werror
LINKER = ar
LFLAGS = rcs
NAME = libas.a
SRC := $(filter-out test.c, $(wildcard *.c))
OBJ := $(SRC:.c=.o)

test: test.c
	rm -f test
	$(COMPILER) test.c -L. -l:libas.a -o test

%.o: %.c
	$(COMPILER) $(CFLAGS) -c $^ -o $@

$(NAME): $(OBJ)
	$(LINKER) $(LFLAGS) $(NAME) $(OBJ)

all: $(NAME) test

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) test

re: fclean all

.PHONY: all clean fclean re