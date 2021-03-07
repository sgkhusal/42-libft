# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sguilher <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/12 02:08:39 by sguilher          #+#    #+#              #
#    Updated: 2021/03/06 17:52:49 by sguilher         ###   ########.fr        #
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
				ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS		= $(SRCS:.c=.o)

BONUS		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c

BONUSOBJS	= $(BONUS:.c=.o)

CC		= gcc

CFLAGS		= -Wall -Wextra -Werror

RM		= rm -f

# Rules

all:	$(NAME)

bonus:		$(BONUSOBJS)
		ar rc $(NAME) $(BONUSOBJS)
		ranlib $(NAME)

%.o:	%.c
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS) $(BONUSOBJS)
		ar rc $@ $(OBJS) $(BONUSOBJS)
		ranlib $@

clean:
		$(RM) $(OBJS) $(BONUSOBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
