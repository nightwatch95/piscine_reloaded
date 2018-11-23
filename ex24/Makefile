# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vjacks <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 22:06:15 by vjacks            #+#    #+#              #
#    Updated: 2018/11/23 18:33:55 by vjacks           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ./srcs/
HEADERS = ./includes/

all:
	gcc -c -I $(HEADERS) $(SRCS)*.c
	ar rc $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f *.a

re:	fclean all
	

