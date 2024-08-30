# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/25 09:27:02 by aelkheta          #+#    #+#              #
#    Updated: 2024/08/30 17:21:38 by aelkheta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CPP_FLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address
NAME = PhoneBook

SRC = PhoneBook.c
OBJ = $(SRC:%.c=%.o)

all: $(NAME)

%.c: %.o
	$(CC) $(CPP_FLAGS) $^ -o $@

$(NAME): $(OBJ)
	$(CC) $(CPP_FLAGS) $^ -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.SECONDARY: