#include "fillit.h"

static int		ft_find_place(t_tetris *t, char **tab, int i, int j);
static void		ft_delete_tetri(t_tetris *t, char **tab, int i, int j);
static void		ft_set_tetriminos(t_tetris *t, char **tab, int i, int j);

int				ft_backtrack(t_list *l, char **tab, int size)
{
	int			i;
	int			j;
	t_tetris	*t;

	if (!l)
		return (1);
	i = -1;
	t = (t_tetris *)l->content;
	while ((U_INT)++i < size - t->height)
	{
		j = -1;
		while ((U_INT)++j < size - t->width)
		{
			if (ft_find_place(t, tab, i, j))
			{
				if (ft_backtrack(l->next, tab, size))
					return (1);
				else
					ft_delete_tetri(t, tab, i, j);
			}
		}
	}
	return (0);
}

static int		ft_find_place(t_tetris *t, char **tab, int i, int j)
{
	U_INT		k;
	U_INT		l;

	k = 0;
	while (k < t->height)
	{
		l = 0;
		while (l < t->width)
		{
			if (t->tetris[k][l] == '#' && tab[i + k][j + l] != '.')
				return (0);
			l++;
		}
		k++;
	}
	ft_set_tetriminos(t, tab, i, j);
	return (1);
}

static void		ft_delete_tetri(t_tetris *t, char **tab, int i, int j)
{
	U_INT		k;
	U_INT		l;

	k = 0;
	while (k < t->height)
	{
		l = 0;
		while (++l < t->width)
		{
			if (t->tetris[k][l] == '#')
				tab[i + k][j + l] = '.';
			l++;
		}
		k++;
	}
}

static void		ft_set_tetriminos(t_tetris *t, char **tab, int i, int j)
{
	U_INT		k;
	U_INT		l;

	k = 0;
	while (k < t->height)
	{
		l = 0;
		while (++l < t->width)
		{
			if (t->tetris[k][l] == '#')
				tab[i + k][j + l] = t->letter;
			l++;
		}
		k++;
	}
}
