# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/25 09:27:16 by aelkheta          #+#    #+#              #
#    Updated: 2024/11/29 15:19:31 by aelkheta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CPP_FLAGS = -Wall -Wextra -Werror
NAME = Account

SRC = tests.cpp Account.cpp
OBJ = $(SRC:%.c=%.o)

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