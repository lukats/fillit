#include "fillit.h"

int			*tab_id_tetris(t_list *list)
{
	t_tetris	*tetris;
	int		*tab;
	int		i;

	i = -1;
	MALLOC_CHECK((tab = malloc(sizeof(int) * ft_lstlen(list))));
	while (list)
	{
		tetris = (t_tetris *)list->content;
		tab[++i] = get_id_tetris(tetris->tetris);
		list = list->next;
	}
	return (tab);
}
