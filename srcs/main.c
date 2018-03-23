# include "fillit.h"
# include <stdio.h>

int	main(int ac, char **av)
{
	int	fd;
	char	*str;
	int	i;
	t_ctrl	*ctrl;

	ctrl = NULL;
	i = 0;
	str = get_tetriminos(av[1]);
	/* while (i < 10) */
	/* { */
	/* 	ctrl = push_back(ctrl, NULL); */
	/* 	i++; */
	/* } */
	/* ctrl = pop_front(ctrl); */
	/* print_list(ctrl); */
	//put_tetriminos_list(str);
	str = str+4*5;
	str = str-4*5;
	printf("%s\n", str);
	return (0);
}
