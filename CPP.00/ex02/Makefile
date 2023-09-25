NAME = ACCOUNT

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = tests.cpp Account.cpp 

RM = rm -rf

$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
		$(RM) $(NAME)
fclean:
		$(RM) $(NAME)

re: clean all

.PHONY: all clean re
