# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/25 09:27:02 by aelkheta          #+#    #+#              #
#    Updated: 2024/11/29 11:59:10 by aelkheta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC := c++ -std=c++98
CPP_FLAGS := -Wall -Wextra -Werror -g3 -fsanitize=address
INCLUDE := -I./
NAME := PhoneBook

SRC := PhoneBook.cpp
OBJ := $(SRC:%.cpp=%.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CPP_FLAGS) ${INCLUDE} -c $^ -o $@

$(NAME): $(OBJ)
	$(CC) $(CPP_FLAGS) ${INCLUDE} $^ -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.SECONDARY: