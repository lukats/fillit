#include "fillit.h"

static int		ft_check_one(char **minos);
static int		ft_check_count(char **minos);

int				ft_check_tetri(char **minos)
{
	char		**tmp;
	int			i;

	i = -1;
	tmp = 0;
	while (minos && minos[++i])
	{
		MALLOC_CHECK((tmp = ft_strsplit(minos[i], '\n')));
		if (ft_check_one(tmp) || ft_check_count(tmp))
			return (1);
		/* ft_memdel((void **)tmp); */ // il faus free les deux dimension d'un tableau :)
		ft_free_tab(tmp); // je remplacer "ft_memdel((void **)tmp)" part "ft_free_tab" pr free les deux dimension ;)
	}
	return (0);
}

static int		ft_check_one(char **minos)
{
	U_INT		i;
	U_INT		j;

	i = 0;
	while (minos[i])
	{
		j = 0;
		while (minos[i][j])
		{
			if (minos[i][j] != '#' && minos[i][j] != '.')
				return (1);
			j++;
		}
		if (j != 4)
			return (1);
		i++;
	}
	return (i != 4);
}

static int		ft_check_count(char **minos)
{
	U_INT		i;
	U_INT		j;
	U_INT		a;
	U_INT		b;

	i = 0;
	a = 0;
	b = 0;
	while (minos[i])
	{
		j = 0;
		while (minos[i][j])
		{
			a += (minos[i][j] == '#') ? 1 : 0;
			b += (minos[i][j] == '.') ? 1 : 0;
			j++;
		}
		i++;
	}
	return (a != 4 || b != 12);
}
