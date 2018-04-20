#include "fillit.h"


char			**tab_tmp(t_list *list, int *size)
{
	char		**tab;
	t_tetris	*t;
	int			n;

	t = (ft_lstlen(list) == 1) ? (t_tetris *)list->content : 0;
	tab = 0;
	if (t)
		*size = (t->width > t->height) ? t->width : t->height;
	else
		*size = 2;
	n = ft_lstlen(list) * 4;
	while (ft_xpowni(*size, 2) < n)
		*size += 1;
	MALLOC_CHECK((tab = ft_malloc_tab(*size, *size)));
	ft_init_tab(tab, *size);
	return (tab);
}
