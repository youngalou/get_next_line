# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lyoung <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/27 10:39:14 by lyoung            #+#    #+#              #
#    Updated: 2017/03/14 13:42:17 by lyoung           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAG = -Wall -Wextra -Werror
SRCS = ft_putchar.c \
	   ft_putstr.c \
	   ft_putendl.c \
	   ft_putnbr.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_strlen.c \
	   ft_strdup.c \
	   ft_strndup.c \
	   ft_strcpy.c \
	   ft_strncpy.c \
	   ft_strcmp.c \
	   ft_strncmp.c \
	   ft_strcat.c \
	   ft_strncat.c \
	   ft_strlcat.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strstr.c \
	   ft_strnstr.c \
	   ft_strnew.c \
	   ft_strdel.c \
	   ft_strclr.c \
	   ft_striter.c \
	   ft_striteri.c \
	   ft_strmap.c \
	   ft_strmapi.c \
	   ft_strequ.c \
	   ft_strnequ.c \
	   ft_strsub.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_strsplit.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_isspace.c \
	   ft_bzero.c \
	   ft_memset.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_memalloc.c \
	   ft_memdel.c \
	   ft_atoi.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_itoa.c \
	   ft_lstnew.c \
	   ft_lstdelone.c \
	   ft_lstdel.c \
	   ft_lstadd.c \
	   ft_lstiter.c \
	   ft_lstmap.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(SRCS)
	@gcc $(CFLAG) -c $(SRCS)
	@echo "\033[32m- object files created\033[0m"
	@ar rc $(NAME) $(OBJS)
	@echo "\033[32m- libft.a compiled\033[0m"

clean:
	@rm -f $(OBJS)
	@echo "\033[31m- object files removed\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[31m- libft.a removed\033[0m"

re: fclean all
