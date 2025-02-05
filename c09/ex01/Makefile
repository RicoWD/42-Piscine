# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/05 13:46:00 by erpascua          #+#    #+#              #
#    Updated: 2025/02/05 19:15:14 by erpascua         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# VARIABLES

NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -I includes
SRCS	= srcs/ft_putchar.c \
		  srcs/ft_swap.c	\
		  srcs/ft_putstr.c	\
		  srcs/ft_strlen.c	\
		  srcs/ft_strcmp.c
OBJ		= $(SRCS:.c=.o)
AR		= ar rc
RM		= rm -f

# RULES

all:$(NAME)

$(NAME):$(OBJ)
	$(AR) $(NAME) $(OBJ)
	ranlib $(NAME)

%.o:%.c includes ft_h
	$(CC) $(CFLAGS) -c $ c -o $@

clean:
	$(RM) $(OBJ)

fclean:clean
	$(RM) $(NAME)

re:fclean all

.PHONY: all clear fclean re
