#include "fillit.h"
#include <stdio.h>

char			**shift_n(char **tab, int x, int y)
{
	int		i;
	int		j;


	j = -1;
	i = 0;
	while (++j < x)
		tab[i][j] = j + 48;
	while (tab[++i])
	{
 		j = 0;
		tab[i][x - 1] = tab[i - 1][j];
		while (++j < x)
			tab[i][j - 1] = tab[i - 1][j];
		if (i == y)
		{
			tab[i][0] = tab[i - 1][j - 1];
			tab[i][1] = tab[i - 1][j - 2];
			tab[i][2] = tab[i - 1][j - 3];
		}
	}
	return (tab);
}
