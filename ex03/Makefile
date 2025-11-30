name = Fixed
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =	main.cpp \
		Fixed.cpp \
		Point.cpp \
		bsp.cpp
OBJS = $(SRCS:.cpp=.o)
RM = rm -f
EXEC = bsp
all: $(EXEC)
$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(EXEC)
re: fclean all
.PHONY: all clean fclean re