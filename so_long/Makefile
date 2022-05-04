# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hakermad <hakermad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/06 12:33:49 by hakermad          #+#    #+#              #
#    Updated: 2022/04/14 11:38:11 by hakermad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
BONUS_NAME = so_long_bonus
SRCS = mandatory/main.c mandatory/ft_keycode.c mandatory/my_img.c mandatory/ft_map.c mandatory/ft_windows.c mandatory/ft_close.c mandatory/my_protections.c mandatory/utils.c mandatory/block_wall.c mandatory/ft_map_line.c mandatory/ft_map_line2.c mandatory/ft_protect_map.c\
get_next_line/get_next_line.c get_next_line/get_next_line_utils.c\

SRCS_BONUS = bonus/main.c bonus/ft_keycode.c bonus/my_img.c bonus/ft_map.c bonus/ft_windows.c bonus/ft_close.c bonus/my_protections.c bonus/utils.c bonus/block_wall.c bonus/money_after_before.c bonus/ft_map_line.c bonus/ft_map_line2.c bonus/ft_map_line3.c bonus/protections_ok.c bonus/ft_protect_map.c\
get_next_line/get_next_line.c get_next_line/get_next_line_utils.c\

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror


all: libft $(NAME)

libft:
	make -C ./libft

.c.o:
	$(CC) $(CFLAGS) -Imlx -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) -lmlx -framework OpenGL -framework AppKit $(OBJS) -lm -L./libft -lft

$(BONUS_NAME): $(OBJS_BONUS)
	$(CC) $(CFLAGS) -o $(BONUS_NAME) -lmlx -framework OpenGL -framework AppKit $(OBJS_BONUS) -lm -L./libft -lft

bonus: libft $(BONUS_NAME)

clean:
	make clean -C ./libft
	rm -f $(OBJS)
	rm -f $(OBJS_BONUS)

fclean: clean
	rm -f libft/libft.a
	rm -f $(NAME)
	rm -f $(BONUS_NAME)

re: fclean all

.PHONY: libft bonus
