# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngbanza <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/02 12:09:21 by ngbanza           #+#    #+#              #
#*   Updated: 2018/07/03 10:20:26 by                  ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME = libfts.a
AS = nasm
ASFLAGS = -f macho64
SRC = ft_bzero.s ft_cat.s ft_isascii.s ft_isalnum.s ft_isalpha.s ft_isdigit.s \
	  ft_islower.s ft_isprint.s ft_isupper.s len.s ft_memcpy.s ft_memset.s \
	  ft_puts.s ft_strcat.s ft_strncat.s ft_strcmp.s ft_strdup.s ft_strlen.s\
	 ft_tolower.s ft_toupper.s ft_isblank.s ft_putchar.s ft_putstr.s ft_strncat.s\
	 ft_strcmp.s\

OBJ = $(SRC:.s=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
