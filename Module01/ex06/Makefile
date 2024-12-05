# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 16:28:57 by aelkheta          #+#    #+#              #
#    Updated: 2024/12/05 17:07:59 by aelkheta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address
NAME = harlFilter

SRC = main.cpp Harl.cpp
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
