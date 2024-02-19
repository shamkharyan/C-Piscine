# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pshamkha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/13 15:00:07 by pshamkha          #+#    #+#              #
#    Updated: 2024/01/13 17:03:13 by pshamkha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/
HEADER = ./includes/*.h
FLAGS = -Wall -Wextra -Werror
FILES = $(SRC)ft_putchar.c $(SRC)ft_putstr.c $(SRC)ft_strcmp.c $(SRC)ft_strlen.c $(SRC)ft_swap.c

all: $(NAME)

$(NAME):
		gcc $(FLAGS) -c $(FILES) -I $(HEADER)
		ar rc $(NAME) *.o
		ranlib $(NAME)

clean:
		/bin/rm -f *.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all

.PHONY:  all clean fclean re
