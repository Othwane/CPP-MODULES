NAME = UNCV

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS = ${SRCS:.cpp=.o}

RM = rm -rf

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:	clean all

.PHONY: all clean re
