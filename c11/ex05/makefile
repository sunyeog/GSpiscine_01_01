# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sunhnoh <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 20:52:31 by sunhnoh           #+#    #+#              #
#    Updated: 2023/12/20 20:52:39 by sunhnoh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = do-op
CC = cc
CFLAG = -Wall -Wextra -Werror
SRCS = main.c cal.c atoi.c
OBJS = ${SRCS:.c=.o}

all: ${TARGET}

$(TARGET): 
	${CC} ${CFLAG} -o ${TARGET} ${SRCS}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${TARGET}

re: fclean all
