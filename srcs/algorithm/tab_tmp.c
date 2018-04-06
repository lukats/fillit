#include "fillit.h"

char	**tab_tmp(t_list *list)
{
	int	size;
	char	**tab;
	int     n;

	tab = 0;
	size = ft_lstlen(list) * 4;
	n = size;
	size = ft_xpowni(size, 2);
	if (size >= n)
		tab = ((tab = ft_malloc_tab(size, size))) ? tab : tab;
	return (tab);
}
