NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = $(wildcard *.c)

all:$(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all
