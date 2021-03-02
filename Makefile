# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sguilher <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/12 02:08:39 by sguilher          #+#    #+#              #
#    Updated: 2021/03/02 22:11:21 by sguilher         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Libft Makefile

# Variables

NAME		= libft.a

SRCS		= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
				ft_memmove.c ft_memchr.c ft_memcmp.c \
				ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c \
				ft_strrchr.c ft_strnstr.c ft_strncmp.c \
				ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
				ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
				ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
				ft_strtrim.c \
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS		= ${SRCS:.c=.o}

CC		= gcc

CFLAGS		= -Wall -Wextra -Werror

RM		= rm -f # removes 'Read only File' without asking

# Rules

# Convert .c files to objects files (.o)
%.o:	%.c
		${CC} ${CFLAGS} -c $< -o $@
# $< refere-se aos arquivos .c - a entrada
# $@ = saida (no caso, OBJS)

${NAME}:	${OBJS}
		ar rc $@ ${OBJS}
		ranlib $@
# ran lib cria um sumario da biblioteca que permite a compilacao mais rapida

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
