# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cseguier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/19 17:17:56 by cseguier          #+#    #+#              #
#    Updated: 2018/07/22 11:01:34 by cseguier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
SRC= srcs/ft_putchar.c srcs/ft_putstr.c \
	srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJ= ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
		gcc -c $(SRC)
		ar rcs $(NAME) $(OBJ)

clean:
		/bin/rm -f $(OBJ)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
