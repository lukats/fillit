#include "fillit.h"

int			main(int ac, char **av)
{
	char		*str;
	char		**tab;
	char		**shift;
	t_list		*list;
	int		y;
	t_tetris	*tetris;

	str = get_tetriminos(av[ac - 1]);
	str = replace_char(str, 'X');
	tab = ft_strsplit(str, 'X');
	list = put_tetriminos_list(tab);
	shift = ft_malloc_tab((y = ft_nlines(ft_lstlen(list))), ft_lstlen(list));
	shift = shift_n(shift, ft_lstlen(list), y / 2);
	int	i = 0;
	while (shift[i])
	{
		ft_putstr(shift[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
