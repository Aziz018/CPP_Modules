# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/21 20:18:42 by aelkheta          #+#    #+#              #
#    Updated: 2024/12/21 20:32:50 by aelkheta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := program
SRC := member_initializer_list.cpp
OBJ := $(SRC:.cpp=.o)
# -std=c++98 -std=c++03 -std=c++11 -std=c++14 -std=c++17 -std=c++20
CXX := c++ -Wall -Wextra -Werror -pedantic -g -fsanitize=address -fsanitize=undefined -fsanitize=bounds -fsanitize=leak

all : $(NAME)

$(OBJ) : $(SRC)
	$(CXX) -c $^ -o $@

$(NAME) : $(OBJ)
	$(CXX) -o $@ $^

clean :
	rm -f $(OBJ)

fclean :
	rm -f $(OBJ) $(NAME)

re: fclean all

.PHONY: all fclean re
.SECONDARY: $(OBJ)