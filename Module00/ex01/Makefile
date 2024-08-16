CC = c++ -std=c++98
CPP_FLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address
NAME = PhoneBook

SRC = PhoneBook.c
OBJ = $(SRC:%.c=%.o)

all: $(NAME)

#%.c: %.o
#	$(CC) $(CPP_FLAGS) $^ -o $@

$(NAME): $(OBJ)
	$(CC) $(CPP_FLAGS) $^ -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all