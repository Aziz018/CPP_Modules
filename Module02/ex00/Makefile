# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 17:29:28 by aelkheta          #+#    #+#              #
#    Updated: 2024/09/03 21:46:05 by aelkheta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CPP_FLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address
NAME = fixed

SRC = Fixed.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CPP_FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CPP_FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
