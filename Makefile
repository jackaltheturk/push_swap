NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
LIBFT = libft.a
SRC =	push_swap.c checker_fixer.c atoix.c \
error.c check_tools.c sorter.c moves.c calculators.c \
triblesort.c

OBJ = $(SRC:.c=.o)

all: $(LIBFT) $(NAME)
	
$(LIBFT):
	make -C libft/

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) libft/libft.a

clean:
	rm -f $(OBJ)
	make clean -C libft/

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re