# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/02 14:39:48 by aelkheta@st       #+#    #+#              #
#    Updated: 2025/01/11 18:18:55 by aelkheta@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX := c++
CPP_FLAGS := -Wall -Wextra -Werror -std=c++98 -g3
NAME := Form
INCLUDE := -I./

SRC := $(shell find . -name '*.cpp')
OBJ := $(SRC:%.cpp=%.o)

all: $(NAME)

%.o: %.cpp
	@$(CXX) $(CPP_FLAGS) $(INCLUDE) -c $^ -o $@
	@echo "Compiling ..."

$(NAME): $(OBJ)
	@$(CXX) $(CPP_FLAGS) $(INCLUDE) $^ -o $@
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