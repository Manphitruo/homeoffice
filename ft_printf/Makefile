# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: munoguer <munoguer@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/20 12:39:15 by munoguer          #+#    #+#              #
#    Updated: 2026/11/20 18:17:27 by munoguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c
OBJS = $(SRCS:.c=.o)
INCS = ft_printf.h libft/libft.h

CFLAGS = -Wall -Werror -Wextra
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $(OBJS)

%.o: %.c $(INCS)
	@cc $(CFLAGS) -c $<

clean:
	@rm -fv $(OBJS)

fclean: clean
	@rm -fv $(NAME)

re: fclean all

.PHONY: all clean fclean re