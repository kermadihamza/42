<<<<<<< HEAD
SRCS = main.c utils.c ft_atoi_push.c sort_little.c radix.c ft_check.c sort.c index.c operations/swap.c operations/push.c operations/rotate.c operations/reverse_rotate.c
=======
SRCS = main.c utils.c ft_atoi_push.c push_swap.c sort_little.c radix.c ft_free.c ft_check.c sort.c index.c operations/swap.c operations/push.c operations/rotate.c operations/reverse_rotate.c
>>>>>>> 6dccd5a0e4288e2e9a14327401b00f643d300723
SRCS_BONUS = checker.c

OBJS = ${SRCS:.c=.o}
BONUS_OBJS = $(SRCS_BONUS:.c=.o)

NAME = push_swap
BONUS_NAME = checker

CFLAGS = -Wall -Wextra -Werror
CC = gcc

all: libft $(NAME)

libft:
	make bonus -C ./libft

.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L./libft -lft

bonus: $(BONUS_OBJS)
	$(CC) $(CFLAGS) -o $(BONUS_NAME) $(BONUS_OBJS) -L./libft -lft

clean:
	make clean -C ./libft
	rm -f $(OBJS)

fclean: clean
	rm -f libft/libft.a
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re libft bonus