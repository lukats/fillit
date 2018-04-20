#include "fillit.h"

static void		ft_print_tab(char **tab);

int				main(int ac, char **av)
{
	t_list		*list;
	char		**tab;

	list = 0;
	tab = 0;
	if (ac == 2)
	{
		if (ft_get_tetriminos(av[ac - 1], &list))
			return (1);
		tab = ft_resolving(list);
		ft_print_tab(tab);
		ft_free_tab(tab);
		ft_free_list(&list);
	}
	else
		ft_putendl("usage : fillit [file] - Only one parameter");
	return ((ac == 2) ? 0 : 1);
}

static void		ft_print_tab(char **tab)
{
	int			i;

	i = -1;
	while (tab[++i])
		ft_putendl(tab[i]);
}
