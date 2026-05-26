NAME = libft.a
SONAME = libft.so

CC = cc
CFLAGS = -Wall -Wextra -Werror -fPIC

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Shared library target
so: $(OBJS)
	$(CC) -shared -o $(SONAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(SONAME)

re: fclean all

.PHONY: all so clean fclean re
