#include "fillit.h"

int				main(int ac, char **av)
{
	char		**shift;
	int			*p;
	U_LONG		i;
	t_list		*list;

	if (ac == 2)
	{
		if (ft_get_tetriminos(av[ac - 1], &list))
			return (1);
		shift = ft_tab_truth(ft_lstlen(list), ft_nlines(ft_lstlen(list)));
		i = 0;
		while (shift[i])
			ft_putendl(shift[i++]);
		ft_putendl("");
		p = tab_id_tetris(list);
		i = 0;
		while (i < ft_lstlen(list))
		{
			ft_putnbr(p[i++]);
			ft_putendl("");
		}
	}
	else
		ft_putendl("usage : fillit [file] - Only one parameter");
	return ((ac == 2) ? 0 : 1);
}
