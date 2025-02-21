NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT = libft.a
SRC =	src/push_swap.c src/checker_fixer.c \
src/atoix.c src/check_tools.c \
src/sorter.c src/moves.c \
src/calculators.c src/triblesort.c \
src/backtofuture.c src/costs.c

BONUS_SRC = bonus_src/checker_bonus.c bonus_src/atoix_bonus.c \
bonus_src/cf_bonus.c bonus_src/ct_bonus.c \
bonus_src/gnl_bonus.c bonus_src/gnl_utils_bonus.c \
bonus_src/sure_bonus.c

OBJ = $(SRC:.c=.o)
BONUS_OBJ = ${BONUS_SRC:.c=.o}
	
$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) libft/libft.a

$(LIBFT):
	make -C libft/

bonus: ${BONUS_OBJ} $(LIBFT)
	${CC} ${CFLAGS} -o checker ${BONUS_OBJ} libft/libft.a

all: ${NAME} bonus

clean:
	rm -f $(OBJ)
	rm -f $(BONUS_OBJ)
	make clean -C libft/

fclean: clean
	rm -f $(NAME)
	rm -f checker
	make fclean -C libft/

re: fclean $(NAME)

re_bonus: fclean bonus

.PHONY: all clean fclean re