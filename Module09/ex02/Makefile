# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/02 18:25:37 by aelkheta@st       #+#    #+#              #
#    Updated: 2025/02/01 17:51:48 by aelkheta@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX := c++
CXX_FLAGS := -Wall -Wextra -Werror -std=c++98 # -std=c++98 -g3
NAME := PmergeMe
INCLUDE := -I./

SRC := $(shell find . -name '*.cpp')
OBJ := $(SRC:%.cpp=%.o)

all: $(NAME)

%.o: %.cpp
	@$(CXX) $(CXX_FLAGS) $(INCLUDE) -c $^ -o $@
	@echo "Compiling ..."

$(NAME): $(OBJ)
	@$(CXX) $(CXX_FLAGS) $(INCLUDE) $^ -o $@
	@echo "Compiling ..."

clean:
	@rm -f *.o ./src/*.o
	@echo "Cleaning ..."

fclean: clean
	@rm -f $(NAME)
	@echo "Cleaning ..."

re: fclean all

.PHONY: all clean fclean re
.SECONDARY:    