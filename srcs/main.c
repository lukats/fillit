# include "fillit.h"

int			main(int ac, char **av)
{
	char	*str;
	char	**tab;
	t_list	*list;
	t_tetris	*tetris;

	list = 0;
	str = get_tetriminos(av[ac - 1]);
	str = replace_char(str, 'X');
	tab = ft_strsplit(str, 'X');
	list = put_tetriminos_list(tab);
	while (list)
	{
		tetris = (t_tetris *) list->content;
		tab = tetris->tetris;
		while (*tab)
		{
			ft_putstr(*tab);
			ft_putstr("\n");
			tab++;
		}
		list = list->next;
	}
	return (0);
}
