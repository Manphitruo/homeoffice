# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/30 11:41:09 by munoguer          #+#    #+#              #
#    Updated: 2026/11/07 02:40:43 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
INCS = libft.h
AR = ar rcs
CFLAGS = -Wall -Werror -Wextra

all:$(NAME)

$(NAME):$(OBJS)
	$(AR) $@ $(OBJS)
	
%.o:%.c $(INCS)
	@cc $(CFLAGS) -c $<

clean:
	@rm -fv $(OBJS)

fclean:clean
	@rm -fv $(NAME)

re:fclean all

.PHONY: clean fclean re