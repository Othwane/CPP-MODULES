NAME = megaphone

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

OBJS = ${SRCS:%.cpp=%.o}

SRCS = megaphone.cpp

$(NAME): $(OBJS)
		@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all:	$(NAME)

clean:
		@$(RM) $(OBJS)

fclean: clean
		@$(RM) $(NAME)

re : fclean all

.PHONY: all clean re
