#include "fillit.h"

int			main(int ac, char **av)
{
	char		**shift;
	t_list		*list;
	int			y;
	t_tetris	*tetris;

	if (ac == 2)
	{
		if (ft_get_tetriminos(av[ac - 1], &list))
			return (1);
		shift = ft_malloc_tab((y = ft_nlines(ft_lstlen(list))), ft_lstlen(list));
		shift = shift_n(shift, ft_lstlen(list), y / 2);
		int	i = 0;
		while (shift[i])
		{
			ft_putstr(shift[i]);
			ft_putstr("\n");
			i++;
		}
	}
	else
		ft_putendl("usage : fillit [file] - Only one parameter");
	return ((ac == 2) ? 0 : 1);
}
