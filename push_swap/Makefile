SRCS = main.c utils.c ft_atoi_push.c push_swap.c
OBJS = ${SRCS:.c=.o}
NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
CC = gcc

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : libft ${NAME}

libft:
	make bonus -C libft/

${NAME}: ${OBJS}
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L./libft -lft
clean: 
	rm -f ${OBJS}

fclean: clean
	make -C libft/ fclean
	rm -f ${NAME}

re: fclean all

.PHONY: libft