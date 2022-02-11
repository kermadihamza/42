# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/19 11:56:43 by hakermad          #+#    #+#              #
#    Updated: 2022/01/19 14:13:30 by hakermad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_puthexa.c ft_putpositive_fd.c ft_sort_di.c \
ft_sort_s.c ft_sort_u.c ft_sort_c.c ft_sort_p.c ft_sort_x.c ft_sort_upperx.c \
ft_format.c ft_counter.c ft_count_hexa.c ft_sort_percent.c
OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : libft ${NAME}

libft:
	make -C libft/ 

${NAME}: ${OBJS}
	cp libft/libft.a ${NAME}
	ar -rcs ${NAME} ${OBJS}
clean: 
	rm -f ${OBJS}

fclean: clean
	make -C libft/ fclean
	rm -f ${NAME}

re: fclean all

.PHONY: libft