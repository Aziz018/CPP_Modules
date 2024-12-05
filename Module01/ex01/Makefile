# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/31 16:19:25 by aelkheta          #+#    #+#              #
#    Updated: 2024/12/04 11:30:32 by aelkheta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98 # -g3 -fsanitize=address
NAME = MoarBrainz!

SRC = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = $(SRC:%.c=%.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CPP_FLAGS) -c $^ -o $@

$(NAME): $(OBJ)
	$(CC) $(CPP_FLAGS) $^ -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.SECONDARY: