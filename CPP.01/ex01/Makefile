NAME = ZombieHorde

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Zombie.cpp zombieHorde.cpp

OBJS = ${SRCS:%.cpp=%.o}

RM = rm -rf

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:	fclean all

.PHONY: all clean re
