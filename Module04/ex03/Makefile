# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/25 09:27:05 by aelkheta          #+#    #+#              #
#    Updated: 2024/12/30 09:23:18 by aelkheta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++
CPP_FLAGS := -Wall -Wextra -Werror -std=c++98 #-g3 -fsanitize=address
NAME := AMateria
INCLUDE := -I ./include

SRC := $(shell find . -name '*.cpp')
OBJ := $(SRC:%.cpp=%.o)

all: $(NAME)

%.o: %.cpp
	@$(CC) $(CPP_FLAGS) $(INCLUDE) -c $^ -o $@
	@echo "Compiling ..."

$(NAME): $(OBJ)
	@$(CC) $(CPP_FLAGS) $(INCLUDE) $^ -o $@
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