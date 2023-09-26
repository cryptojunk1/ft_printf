# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 13:55:31 by rmessner          #+#    #+#              #
#    Updated: 2023/09/26 16:46:10 by rmessner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
INCLUDE		= ft_printf.h
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra

SRC 	= ft_printf.c ft_percent.c ft_helper_itoa.c ft_helper_util.c ft_printhex.c ft_printnbr.c \
		ft_printpointer.c ft_printuint.c ft_printstr.c ft_proofformat.c

OBJ		= $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ) $(INCLUDE)

clean:
	rm -f $(OBJ)
fclean: clean 
	rm -f $(NAME)
re: fclean all
