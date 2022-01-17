# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbulut <fbulut@student.42istanbul.com.t    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 19:18:10 by fbulut            #+#    #+#              #
#    Updated: 2022/01/09 13:54:57 by fbulut           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

list = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_substr.c \
		ft_putnbr_fd.c \
		ft_itoa.c \
		ft_putendl_fd.c \
		ft_strjoin.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_striteri.c

OBJS = $(list:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

all:$(NAME)

.c.o:
	$(CC) -c $(CFLAGS) $<

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:fclean $(NAME)

.PHONY: clean fclean all re
