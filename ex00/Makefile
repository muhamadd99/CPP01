CC = c++

CFLAGS  = -Wall -Wextra -Werror -std=c++98

NAME = zombie

SRC =  main.cpp \
		newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean