#include "fillit.h"

int				main(int ac, char **av)
{
	t_list		*list;

	if (ac == 2)
	{
		if (ft_get_tetriminos(av[ac - 1], &list))
			return (1);
		ft_free_list(&list);
	}
	else
		ft_putendl("usage : fillit [file] - Only one parameter");
	return ((ac == 2) ? 0 : 1);
}
