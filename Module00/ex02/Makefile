# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/25 09:27:16 by aelkheta          #+#    #+#              #
#    Updated: 2024/08/28 20:36:32 by aelkheta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CPP_FLAGS = -Wall -Wextra -Werror
NAME = Account

SRC = tests.cpp Account.cpp
OBJ = $(SRC:%.c=%.o)

all: $(NAME) clean

%.c: %.o
	$(CC) $(CPP_FLAGS) $^ -o $@

$(NAME): $(OBJ)
	$(CC) $^ -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all