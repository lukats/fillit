#include "libft.h"

char	**ft_malloc_tab(int nb_line, int row)
{
	char	**tab;
	int	y;
	int	x;

	y = -1;
	if ((tab = malloc(sizeof(char *) * (nb_line + 1))) == NULL)
		return (NULL);
	while (++y < (nb_line))
	{
		if ((tab[y] = malloc(sizeof(char) * (row + 1))) == NULL)
			return (NULL);
		x = -1;
		while (++x < (row))
			tab[y][x] = '\0';
		tab[y][x] = '\0';
	}
	tab[y] = NULL;
	return (tab);
}
