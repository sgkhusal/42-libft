# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sguilher <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/12 02:08:39 by sguilher          #+#    #+#              #
#    Updated: 2021/02/18 02:45:50 by sguilher         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Libft Makefile

# Variables

NAME		= libft.a

SRCS		= $(wildcard ft_*.c) # wildcard allows to use * in variables
# acho que nao pode usar wildcard - eh uma funcao!!!

OBJS		= ${SRCS:.c=.o}

CC		= gcc

CFLAGS		= -Wall -Wextra -Werror

RM		= rm -f # removes 'Read only File' without asking

######################
# tirar!!
MAIN		= main.c
TEST		= test
########################

# Rules

# Convert .c files to objects files (.o)
.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
# outra forma (achei mais entendivel - sera que funciona?):
# %.o:		%.c
		# ${CC} ${CFLAGS} -c $< # $< refere-se aos arquivos .c - a entrada
# % equivale ao * para as rules

# a biblioteca compila os arquivos .c em .o --> gcc -c arquivo.c
${NAME}:	${OBJS}
		ar rc $@ ${OBJS} # $@ = ${NAME}
		ranlib $@ # cria um sumario da biblioteca que permite a compilacao mais rapida

##############################
# tirar!!
${TEST}:	${MAIN}
		${CC} ${CFLAGS} $< -o $@ -L. lft
# -L indica o diretorio onde esta a biblioteca (no caso, .)
# lft --> l = link --> faz procurar por libft.a

run:		${TEST}
		./$<
###############################

all:		${NAME}

# remove unnecessary arquives (arquives used for compilation)
clean:
		${RM} ${OBJS}

# delete the library and compilation arquives
fclean:		clean
		${RM} ${NAME}

# to force a recompilation
re:		fclean all

.PHONY: all clean fclean re
# .PHONY is a special rule used to specify that the target is not a file. This way it won`t conflict if you have files named with the specified rules names
