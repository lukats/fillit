CC	=	gcc

RM	=	rm -f

CFLAGS	=	-g -I../include/

# CFLAGS	= -Wextra -Wall -g

NAME	=	../fillit

SRCS	=	./main.c				\
		./get_tetriminos/get_tetriminos.c	\
		./get_tetriminos/push_front.c		\
		./get_tetriminos/print_list.c		\
		./get_tetriminos/push_back.c		\
		./get_tetriminos/pop_list.c		\

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
