# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 10:17:12 by rmessner          #+#    #+#              #
#    Updated: 2023/09/25 16:26:06 by rmessner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Variables
NAME = libft.a
CC	= gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = ./
SRC_DIR = Source

all:	$(NAME)

$(NAME): $(SRC_DIR)/*.c
	$(CC) $(CFLAGS) -I$(INCLUDE) -c $(SRC_DIR)/*.c
	@ar rcs $(NAME) *.o
	@echo "Libft Libary compiled!"

clean:
	rm -f *.o
fclean: clean 
	rm -f $(NAME)
re: fclean all