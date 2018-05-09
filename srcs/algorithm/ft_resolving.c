#include "fillit.h"

char			**ft_resolving(t_list *l)
{
	char		**tmp;
	int			size;
	t_tetris		*t;

	size = 0;
	tmp = tab_tmp(l, &size);
	t = l->content;
	while (!ft_backtrack(l, tmp, size))
	{
		size++;
		ft_free_tab(tmp);
		MALLOC_CHECK((tmp = ft_malloc_tab(size, size)));
		ft_init_tab(tmp, size);
	}
	return (tmp);
}
