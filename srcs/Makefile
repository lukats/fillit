CC	=	gcc

RM	=	rm -f

# CFLAGS	=	-Wextra -Werror -Wall -I../include/
CFLAGS	=	-g -I../include/

NAME	=	../fillit

SRCS	=	./main.c \
			./get_tetriminos/put_tetriminos_list.c \
			./get_tetriminos/fill_node.c \
			./get_tetriminos/replace_char.c \
			./get_tetriminos/ft_get_tetriminos.c \
			./errors/ft_tetris_mask.c \
			./errors/ft_new_tetris.c \
			./errors/ft_size_tetriminos.c \
			./errors/ft_check_tetri.c \
			./errors/get_id_tetris.c \
			./errors/tab_id_tetris.c \
			./algorithm/tab_tmp.c \
			./algorithm/ft_backtrack.c \
			./algorithm/ft_resolving.c \
			./algorithm/ft_init_tab.c \
			./errors/ft_free_tab.c \
			./errors/ft_free_list.c

OBJS	=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) $(OBJS)  -o $(NAME)  -L../libft -lft

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
