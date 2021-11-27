# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aomman <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/27 00:57:42 by aomman            #+#    #+#              #
#    Updated: 2021/11/27 01:00:25 by aomman           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_putchar.c ft_putnbr_hex_lower.c ft_putnbr_hex_upper.c\
		ft_putnbr.c ft_putstr.c ft_putunsigned_nbr.c ft_print_adresse.c\
		ft_putunsigned_nbr.c\

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rc

OBJS = ${SRCS:.c=.o}

%.o : %.c
	${CC} $(CFLAGS) -c $< -o $@  
	${AR} ${NAME} $@

all : $(NAME)

$(NAME) : ${OBJS}

clean :
	rm -f ${OBJS}
fclean : clean
	rm -f ${NAME}

re : fclean all 

.PHONY : re fclean clean all
