# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 13:55:31 by rmessner          #+#    #+#              #
#    Updated: 2023/09/20 17:19:03 by rmessner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
INCLUDE	= ft_printf.h
LIB 	= Libft
CC		= cc
CFLAGS	= -Wall -Wextra -Werror


SRC = ft_printf.c ft_percent.c ft_printnbr.c ft_printstr.c 
OBJ		= $(SRC:.c=.o) 

all: $(NAME)

$(NAME): $(OBJ)
	echo Compiling: $(NAME)
	make -C $(LIB)
	ar rsc $(NAME) $(OBJ)
	$(CC) $(CFLAGS) -c $(INCLUDE) $(SRC)
clean:
	make clean -C $(LIB)
	rm -f $(OBJ)

fclean: clean 
	make fclean -C $(LIB)
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re