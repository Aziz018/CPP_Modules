# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/16 01:55:00 by aelkheta          #+#    #+#              #
#    Updated: 2024/09/17 21:55:40 by aelkheta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CPP_FLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address
NAME = ScavTrap
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CPP_FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CPP_FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
