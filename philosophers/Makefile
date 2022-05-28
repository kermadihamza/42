# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/23 17:27:16 by hakermad          #+#    #+#              #
#    Updated: 2022/05/28 16:16:41 by hakermad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = parsing.c utils.c philo.c msg_exit.c main.c
OBJS = $(SRCS:.c=.o)
NAME = philo
CC = gcc
CFLAGS = -Wall -Wextra -Werror -fsanitize=thread

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@ -pthread

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re