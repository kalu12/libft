# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luvuceno <luvuceno@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 16:24:58 by luvuceno          #+#    #+#              #
#    Updated: 2022/12/23 17:56:37 by luvuceno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror


 SRC = ft_bzero.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcmp.c \
 	ft_memmove.c ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_tolower.c \
 	ft_atoi.c   ft_calloc.c ft_isalpha.c ft_isdigit.c ft_memchr.c ft_memcpy.c \
 	ft_memset.c ft_strlcat.c ft_strlen.c ft_strrchr.c ft_toupper.c ft_substr.c \
	ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_itoa.c ft_strdup.c ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c   \
	ft_strnstr.c 
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

# $(OBJ):
# 	$(CC) $(FLAGS) $(SRC)


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all