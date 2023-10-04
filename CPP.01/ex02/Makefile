NAME = HITHISISBRAIN

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp

OBJS = $(SRCS:.c=.o)

RM = rm -rf

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
		$(RM) $(NAME)

fclean:
		$(RM) $(NAME)

re:	clean all

.PHONY: all clean re
