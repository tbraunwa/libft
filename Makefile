# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbraunwa <tbraunwa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/13 14:29:45 by tbraunwa          #+#    #+#              #
#    Updated: 2021/10/19 20:55:15 by tbraunwa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_strlen.c \
	ft_putstr_fd.c ft_tolower.c ft_toupper.c ft_strlcpy.c ft_strlcat.c \
	ft_strdup.c ft_striteri.c ft_itoa.c ft_atoi.c ft_putnbr_fd.c \
	ft_strrchr.c ft_strchr.c ft_strncmp.c ft_strnstr.c ft_substr.c ft_split.c \
	ft_memmove.c ft_strtrim.c ft_strmapi.c ft_strjoin.c
	
SRC_BONUS = ft_lstnew.c 

NAME = libft.a
OBJ := $(SRC:%.c=%.o)
OBJ_BONUS := $(SRC_BONUS:%.c=%.o)
CC = gcc
CFLAGS ?= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ) libft.h
	ar rcs $(NAME) $(OBJ) $@

%.o: %.c
	$(CC) $(CFLAGS) -g -c $< -o $@

clean:
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJ_BONUS) libft.h
	ar rcs $(Name) $(OBJ_BONUS) $@

so:
	-nostartfiles -fPIC $-Wall -Werror -Wextra $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

.PHONY: all clean fclean re
