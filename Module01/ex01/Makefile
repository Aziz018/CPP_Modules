# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/31 16:19:25 by aelkheta          #+#    #+#              #
#    Updated: 2024/09/02 08:15:01 by aelkheta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CPP_FLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address
NAME = Zombie

SRC = main.cpp Zombie.cpp zombieHorde.cpp
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