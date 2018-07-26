# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cseguier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/26 16:31:44 by cseguier          #+#    #+#              #
#    Updated: 2018/07/26 16:38:16 by cseguier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=do-op
SRC= ft_putchar.c ft_putstr.c ft_putnbr.c ft_strcmp.c ft_do_op.c ft_op.c ft_atoi.c
OBJ= ft_putchar.o ft_putstr.o ft_putnbr.o ft_strcmp.o ft_do_op.o ft_op.d ft_atoi.o

all: $(NAME)

$(NAME):
			gcc -Wall -Wextra -Werror -I . -o $(NAME) $(SRC)

clean:
			/bin/rm -f $(OBJ)

fclean: clean
			/bin/rm -f $(NAME)

re: fclean all
