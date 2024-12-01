# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/25 09:27:02 by aelkheta          #+#    #+#              #
#    Updated: 2024/12/01 15:57:55 by aelkheta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++
CPP_FLAGS := -Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address
INCLUDE := -I./
NAME := PhoneBook

SRC := $(shell find . -name '*.cpp') # PhoneBook.cpp
OBJ := $(SRC:%.cpp=%.o)

all: $(NAME)

%.o: %.cpp
	@$(CC) $(CPP_FLAGS) ${INCLUDE} -c $^ -o $@
	@echo "Compiling ..."

$(NAME): $(OBJ)
	@$(CC) $(CPP_FLAGS) ${INCLUDE} $^ -o $@
	@echo "Compiling ..."

clean:
	@rm -f *.o
	@echo "Cleaning ..."

fclean: clean
	@rm -f $(NAME)
	@echo "Cleaning ..."

re: fclean all

.SECONDARY: