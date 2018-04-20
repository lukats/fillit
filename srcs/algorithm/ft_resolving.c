#include "fillit.h"

char			**ft_resolving(t_list *l)
{
	char		**tmp;
	int			size;

	size = 0;
	tmp = tab_tmp(l, &size);
	while (!ft_backtrack(l, tmp, size))
	{
		size++;
		ft_free_tab(tmp);
		MALLOC_CHECK((tmp = ft_malloc_tab(size, size)));
		ft_init_tab(tmp, size);
	}
	return (tmp);
}
