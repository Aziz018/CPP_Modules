# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/25 09:27:05 by aelkheta          #+#    #+#              #
#    Updated: 2024/12/22 10:42:18 by aelkheta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++
CPP_FLAGS := -Wall -Wextra -Werror -std=c++98 -fsanitize=undefined
NAME := Animal
INCLDUE := -I ./include

SRC := $(shell find . -name '*.cpp')
OBJ := $(SRC:%.cpp=%.o)

all: $(NAME)

%.o: %.cpp
	@$(CC) $(CPP_FLAGS) ${INCLDUE} -c $^ -o $@
	@echo "Compiling ..."

$(NAME): $(OBJ)
	@$(CC) $(CPP_FLAGS) ${INCLDUE} $^ -o $@
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