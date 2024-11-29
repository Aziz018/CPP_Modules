# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/25 09:27:05 by aelkheta          #+#    #+#              #
#    Updated: 2024/11/29 14:22:00 by aelkheta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CPP_FLAGS = -Wall -Wextra -Werror
NAME = megaphone

SRC = megaphone.cpp
OBJ := $(SRC:%.cpp=%.o)
# SRC := $(shell find . -name '*.cpp') # PhoneBook.cpp

all: $(NAME) clean

%.o: %.cpp
	@$(CC) $(CPP_FLAGS) -c $^ -o $@
	@echo "Compiling ..."

$(NAME): $(OBJ)
	@$(CC) $^ -o $@
	@echo "Compiling ..."

clean:
	@rm -f *.o
	@echo "Cleaning ..."

fclean: clean
	@rm -f $(NAME)
	@echo "Cleaning ..."

re: fclean all

.SECONDARY: