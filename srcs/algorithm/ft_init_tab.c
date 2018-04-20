#include "fillit.h"

void		ft_init_tab(char **tab, int size)
{
	int			i;
	int			j;

	i = -1;
	while (tab[++i])
	{
		j = -1;
		while (++j < size)
			tab[i][j] = '.';
	}
}
