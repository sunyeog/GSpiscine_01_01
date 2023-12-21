# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/18 14:10:39 by sunhnoh           #+#    #+#              #
#    Updated: 2023/12/21 14:59:38 by sunhnoh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = libft.a
CC = cc
CFLAG = -Wall -Wextra -Werror
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = ${SRCS:.c=.o}

all: ${TARGET}

%.o: %.c
	${CC} ${CFLAG} -I includes -c $< -o ${<:.c=.o}

${TARGET} : ${OBJS}
	ar rc ${TARGET} ${OBJS}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${TARGET}

re: fclean all
