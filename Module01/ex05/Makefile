# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 15:36:58 by aelkheta          #+#    #+#              #
#    Updated: 2024/09/03 16:25:38 by aelkheta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ -std=c++98
CPP_FLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address
NAME = Harl_2.0

SRC = main.cpp Harl.cpp
OBJ = $(SRC:%.c=%.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CPP_FLAGS) -c $^ -o $@

$(NAME): $(OBJ)
	$(CC) $(CPP_FLAGS) $^ -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.SECONDARY: