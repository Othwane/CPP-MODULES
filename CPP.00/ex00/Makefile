NAME = megaphone

CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

OBJS = ${SRCS:.c=.o}

SRCS = megaphone.cpp

$(NAME): $(OBJS)
		@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all:	$(NAME)

clean:
		@$(RM) $(NAME)

fclean:
		@$(RM) $(NAME)

re : clean all

.PHONY: all clean re
