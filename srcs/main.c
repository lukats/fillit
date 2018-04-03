#include "fillit.h"

int			main(int ac, char **av)
{
	char		**shift;
	t_list		*list;
	t_list		*l;
	int			y;
	t_tetris	*tetris;
	int			i;

	if (ac == 2)
	{
		if (ft_get_tetriminos(av[ac - 1], &list))
			return (1);
		shift = ft_malloc_tab((y = ft_nlines(ft_lstlen(list))), ft_lstlen(list));
		shift = shift_n(shift, ft_lstlen(list), y / 2);
		i = 0;
		tetris = (t_tetris *)list->content;
		if (get_id_tetris(tetris->tetris) == 114)
			while (shift[i])
			{
				ft_putendl(shift[i]);
				i++;
			}
		ft_putendl("_");
		l = list;
		while (l)
		{
			i = 0;
			tetris = (t_tetris *)l->content;
			while (tetris->tetris[i])
			{
				ft_putendl(tetris->tetris[i]);
				i++;
			}
			ft_putendl("_");
			l = l->next;
		}
	}
	else
		ft_putendl("usage : fillit [file] - Only one parameter");
	return ((ac == 2) ? 0 : 1);
}
