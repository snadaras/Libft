# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snadaras <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/21 11:54:21 by snadaras          #+#    #+#              #
#    Updated: 2017/12/06 20:02:50 by snadaras         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS_MEM = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
		ft_memmove.c ft_memchr.c ft_memcmp.c
SRCS_STR = ft_strlen.c ft_strdup.c ft_strchr.c ft_strrchr.c \
		ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c \
		ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c \
		ft_strlcat.c ft_strtrim.c
SRCS_TST = ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c
SRCS_OTH = ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c \
		ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c \
		ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c \
		ft_strjoin.c ft_strjoin.c ft_strsplit.c ft_itoa.c \
		ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRCS_BNS = ft_lstadd.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
		ft_lstiter.c ft_lstmap.c
SRCS_EXT = ft_swap.c ft_sqrt.c ft_factorial.c ft_foreach.c ft_strndup.c
SRCS = $(SRCS_MEM) $(SRCS_STR) $(SRCS_TST) $(SRCS_OTH) $(SRCS_BNS) $(SRCS_EXT)
OBJECTS = $(patsubst %.c,%.o,$(SRCS))

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rc $@ $(OBJECTS)
	@echo Creating Library $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re
