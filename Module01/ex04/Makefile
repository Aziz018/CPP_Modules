# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/02 23:54:48 by aelkheta          #+#    #+#              #
#    Updated: 2024/12/04 11:22:31 by aelkheta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98 # -g3 -fsanitize=address
NAME = SedIsForLosers
INCLUDE := -I./

SRC = main.cpp SedForLosers.cpp
OBJ = $(SRC:%.c=%.o)

all: $(NAME)

%.o: %.cpp
	$(CC) $(CPP_FLAGS) $(INCLUDE) -c $^ -o $@

$(NAME): $(OBJ)
	$(CC) $(CPP_FLAGS) $(INCLUDE) $^ -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.SECONDARY: