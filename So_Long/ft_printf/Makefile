# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emekinci <emekinci@student.42kocaeli.com.  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 01:08:06 by emekinci          #+#    #+#              #
#    Updated: 2022/10/19 01:08:09 by emekinci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libftprintf.a
CC		:= gcc
CFLAGS  := -Wall -Wextra -Werror -I. -c
FILES   := ft_putchar.c printf.c
OBJ		:= $(FILES:%.c=%.o)

all: $(NAME)
$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re
