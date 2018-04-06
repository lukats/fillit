CC	=	gcc

RM	=	rm -f

CFLAGS	=	-Wextra -Werror -Wall -I../include/

NAME	=	../fillit

SRCS	=		./main.c \
			./get_tetriminos/get_tetriminos.c \
			./get_tetriminos/put_tetriminos_list.c \
			./get_tetriminos/fill_node.c \
			./get_tetriminos/replace_char.c \
			./get_tetriminos/ft_get_tetriminos.c \
			./algorithm/shift_n.c \
			./algorithm/ft_nlines.c \
			./errors/ft_tetris_mask.c \
			./errors/ft_new_tetris.c \
			./errors/ft_size_tetriminos.c \
			./errors/ft_check_tetri.c \
			./errors/get_id_tetris.c \
			./errors/tab_id_tetris.c \
			./algorithm/tab_tmp.c \
			./algorithm/layout_tetris_list.c \

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
