NAME = FIXED

CC = c++

CXXFLAG = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Fixed.cpp

OBJS = ${SRCS:%.cpp=%.o}

RM = rm -rf

$(NAME): $(OBJS)
	$(CC) $(CXXFLAG) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean all re
