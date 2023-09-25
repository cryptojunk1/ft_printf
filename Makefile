# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 13:55:31 by rmessner          #+#    #+#              #
#    Updated: 2023/09/25 16:26:22 by rmessner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
INCLUDE		= ./
LIBFT		= Libft
SRC_DIR		= Sources
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -I

all:	$(NAME)

$(NAME): $(SRC_DIR)/*.c
	@make -C $(LIBFT)
	@cp Libft/libft.a .
	@cp Libft/libft.h .
	$(CC) $(CFLAGS) $(INCLUDE) -c $(SRC_DIR)/*.c
	@ar rcs $(NAME) *.o
	@echo "Printf compiled"

clean:
	rm -f *.o
	rm -f $(LIBFT)/*.o
fclean: clean 
	rm -f $(NAME)
re: fclean all