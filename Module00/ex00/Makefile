CC = c++ -std=c++98
CPP_FLAGS = -Wall -Wextra -Werror
NAME = megaphone

SRC = megaphone.cpp
OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $^ -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all