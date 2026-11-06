# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: munoguer <munoguer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/30 11:41:09 by munoguer          #+#    #+#              #
#    Updated: 2026/11/06 18:02:23 by munoguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = %.c
OBJS = $(SRCS:.c=.o)
INCS = libft.h
AR = ar rcs
CFLAGS = -Wall -Werror -Wextra

all:$(NAME)

$(NAME):%.o
	cc $(CFLAGS) $(AR) -o $@ $<

%.o:%.c libft.h
	cc $(CFLAGS) -c $<

clean:
	@rm -fv $(OBJS)

fclean:clean
	@rm -fv $(NAME)

re:fclean all

.PHONY: clean fclean re