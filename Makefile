# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olaurine <olaurine@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/30 00:26:54 by olaurine          #+#    #+#              #
#    Updated: 2020/05/04 23:22:19 by olaurine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_clean_array_bonus.c \
		ft_is_in_set_bonus.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
		ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
		ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
		ft_abs_bonus.c ft_is_in_set_bonus.c

BNS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
		ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

SRC_OBJECTS = $(patsubst %.c,%.o,$(SRC))
BNS_OBJECTS = $(patsubst %.c,%.o,$(BNS))

HEADERS = libft.h

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SRC_OBJECTS) $(BNS_OBJECTS)
	ar rc $(NAME) $(SRC_OBJECTS) $(BNS_OBJECTS)
	ranlib $(NAME)

%.o: %.c $(HEADERS)
	clang $(FLAGS) -c $< -o $@

clean:
	/bin/rm -rf $(SRC_OBJECTS) $(BNS_OBJECTS)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
