# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/12 17:26:06 by aelkheta          #+#    #+#              #
#    Updated: 2024/12/14 09:25:55 by aelkheta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98 -g3 # -g3 -fsanitize=address
NAME = ScavTrap
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CPP_FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CXX) $(CPP_FLAGS) $(OBJ) -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
