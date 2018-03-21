NAME = fillit
CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIBFT = libft/
HEADER = include/
SRCS = srcs/

OBJ = $(SRCS:.c=.o)

.PHONY: all clean fclean re
.NOTPARALLEL: re


all: lib $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -I $(HEADER) srcs/main.c $(LIBFT)libft.a $< -o $@

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

lib:
	@make -C $(LIBFT) all

clean:
	@/bin/rm -rf $(OBJ)
	@make -C $(LIBFT) clean

fclean: clean
	@/bin/rm -rf $(NAME)
	@make -C $(LIBFT) fclean

re: fclean all
