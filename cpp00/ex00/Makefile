# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nchow-yu <nchow-yu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/08 20:47:13 by nchow-yu          #+#    #+#              #
#    Updated: 2023/01/08 20:47:14 by nchow-yu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	=	megaphone.cpp

OBJS	=	${SRCS:.cpp=.o}
CC		=	c++
CFLAGS	=	-Wall -Werror -Wextra -std=c++98 -g3 -O0 -fsanitize=address
NAME	=	megaphone

%.o:	%.c
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:	${OBJS} ${NAME}

${NAME}:	${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}


clean:
	rm -rf ${OBJS}

fclean:    clean
	rm -rf ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
