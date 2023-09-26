# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmessner <rmessner@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 13:55:31 by rmessner          #+#    #+#              #
#    Updated: 2023/09/26 11:05:11 by rmessner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
INCLUDE		= ./
LIBFT		= libft
SRC_DIR		= Sources
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -I

all:	$(NAME)

$(NAME): $(SRC_DIR)/*.c
	@make -C $(LIBFT)
	@cp libft/libft.a .
	@cp libft/libft.h .
	$(CC) $(CFLAGS) $(INCLUDE) -c $(SRC_DIR)/*.c
	@ar rcs $(NAME) *.o
	@echo "Printf compiled"

clean:
	rm -f *.o
	rm -f $(LIBFT)/*.o
fclean: clean 
	rm -f $(NAME)
re: fclean all