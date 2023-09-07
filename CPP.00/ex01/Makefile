NAME = phonebook

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

SRCS = phonebook.cpp contact.cpp main.cpp

$(NAME):
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
		$(RM) $(NAME)
fclean:
		$(RM) $(NAME)

re: clean all

.PHONY: all clean re
