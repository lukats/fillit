RM	= rm -rf

all	:
		make -s -C libft/
		make -s -C srcs/


clean	:
		make clean -s -C libft/
		make clean -s -C srcs/

fclean	:	clean
		make fclean -s -C libft/
		make fclean -s -C srcs/

re	:	fclean all

.PHONY	:	all clean fclean re
