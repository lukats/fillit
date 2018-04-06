#include "fillit.h"

t_list	*layout_tetris_list(t_list *list, char **tab, char c)
{
	t_tetris	*tetris;
	t_list		*new;

	list = 0;
	tetris = 0;
	tetris = fill_node(tab, c);
	new = ft_lstnew(tetris, (sizeof(tetris) + sizeof(t_tetris)));
	list = (!list) ? new : list;
	if (ft_lstlen(list))
		ft_lstaddb(&list, new);
	return (list);
}
