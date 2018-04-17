#include "fillit.h"

void			ft_free_tab(char **tab)
{
	int			i;

	i = -1;
	while (tab[++i])
		free(tab[i]);
	free(tab);
	tab = 0;
}
