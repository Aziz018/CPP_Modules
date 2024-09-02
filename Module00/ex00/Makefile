# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/25 09:27:05 by aelkheta          #+#    #+#              #
#    Updated: 2024/09/02 21:42:05 by aelkheta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CPP_FLAGS = -Wall -Wextra -Werror
NAME = megaphone

SRC = megaphone.cpp
OBJ = $(SRC:%.c=%.o)

all: $(NAME) clean

%.c: %.o
	$(CC) $(CPP_FLAGS) -c $^ -o $@

$(NAME): $(OBJ)
	$(CC) $^ -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all