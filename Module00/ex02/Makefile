# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/25 09:27:16 by aelkheta          #+#    #+#              #
#    Updated: 2024/12/02 11:31:43 by aelkheta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++
CPP_FLAGS := -Wall -Wextra -Werror -std=c++98
INCLUDE := -I./
NAME := Account

# SRC = tests.cpp Account.cpp
SRC := ${shell find . -name '*.cpp'}
OBJ := $(SRC:%.c=%.o)

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