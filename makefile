# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: suzaho <suzaho@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/10 18:44:56 by suzaho            #+#    #+#              #
#    Updated: 2025/08/10 18:47:20 by suzaho           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

CC = gcc
CFLAGS = -Wall -Wextra -Werror

## to update list when all files are in
SRCS = rush02.c main.c
OBJS = ${SRCS:.c=.o}

all: ${NAME}

## build rush-02, combine all object files & link them into 1 executable
${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

## compilation turns .c files into .o files
%.o: %.c
    ${CC} ${CFLAGS} -c $< -o $@

## Deletes all .o object files (recompile but keep executable)
clean:
    rm -f ${OBJS}

## Deletes all .o object and final executable (full reset)
fclean: clean
    rm -f ${NAME}

##Rebuilds everything from scratch
re: fclean all