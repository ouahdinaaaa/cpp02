# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayael-ou <ayael-ou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 19:12:59 by ayael-ou          #+#    #+#              #
#    Updated: 2023/11/24 02:36:42 by ayael-ou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixeed

SRC_DIR = ./
SRCS = main.cpp\
		Fixed.cpp\

OBJS = ${SRCS:.cpp=.o}
CC = g++
RM = rm -rf

%.o: %.cpp
	${CC} -c $< -o $@

${NAME}: ${OBJS}
	${CC} ${OBJS} -o ${NAME}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re