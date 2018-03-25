#include "libft.h"

char		**ft_malloc_tab(int y, int x)
{
	char	**tab;
	int		i;
	int		j;

	i = -1;
	MALLOC_CHECK((tab = malloc(sizeof(char *) * (y + 1))));
	while (++i < y)
	{
		MALLOC_CHECK((tab[i] = malloc(sizeof(char) * (x + 1))));
		j = -1;
		while (++j < x)
			tab[i][j] = '\0';
		tab[i][j] = '\0';
	}
	tab[i] = 0;
	return (tab);
}
