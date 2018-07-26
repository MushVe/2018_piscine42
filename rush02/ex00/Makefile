# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdescamp <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/22 17:08:24 by fdescamp          #+#    #+#              #
#    Updated: 2018/07/22 19:54:13 by fdescamp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
SRC = compare.c ft_putchar.c ft_strcpy.c ft_colles.c get_str.c main.c check.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean:
	/bin/rm -f *.o *.h.gch

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
