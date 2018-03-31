#include "fillit.h"

static int		ft_check_one(char **minos);

int				ft_check_tetri(char ***minos)
{
	char		**tmp;
	int			i;

	i = -1;
	tmp = 0;
	while (minos[++i])
	{
		MALLOC_CHECK((tmp = ft_strsplit(minos[i], '\n')));
		if (ft_check_one(tmp))
			return (0);
		ft_memdel((void **)tmp);
	}
	return (1);
}

static int		ft_check_one(char **minos)
{
	U_INT		i;
	U_INT		j;
	int			r;

	r = 0;
	i = 0;
	while (minos[i])
	{
		j = 0;
		while (minos[i][j])
		{
			r = (r == 0) ? ft_tetris_mask(minos, i, j) : r;
			j++;
		}
		if (j != 4)
			return (1);
		i++;
	}
	if (i != 4 || !r)
		return (1);
	return (0);
}
