# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta@student.1337.ma <aelkheta>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/25 09:27:05 by aelkheta          #+#    #+#              #
#    Updated: 2025/01/12 18:11:49 by aelkheta@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX := c++
CPP_FLAGS := -Wall -Wextra -Werror -std=c++98 -fsanitize=undefined
NAME := Animal
INCLDUE := -I ./include

SRC := $(shell find . -name '*.cpp')
OBJ := $(SRC:%.cpp=%.o)

all: $(NAME)

%.o: %.cpp
	@$(CXX) $(CPP_FLAGS) ${INCLDUE} -c $^ -o $@
	@echo "Compiling ..."

$(NAME): $(OBJ)
	@$(CXX) $(CPP_FLAGS) ${INCLDUE} $^ -o $@
	@echo "Compiling ..."

clean:
	@rm -f *.o src/*.o
	@echo "Cleaning ..."

fclean: clean
	@rm -f $(NAME)
	@echo "Cleaning ..."

re: fclean all

.PHONY: all clean fclean re
.SECONDARY: