#include "fillit.h"

static void		ft_tetriminos_size(t_tetris *src, U_INT i, U_INT j);

U_LONG			ft_size_tetriminos(t_tetris *src)
{
	U_LONG		r;
	U_INT		i;
	U_INT		j;

	r = 2 * sizeof(U_INT) + sizeof(char);
	i = 0;
	while (src->tetris[i])
	{
		j = 0;
		while (src->tetris[i][j])
		{
			if (ft_tetris_mask(src->tetris, i, j))
				ft_tetriminos_size(src, i, j);
			j++;
		}
		i++;
	}
	r += (src->height + 1) * sizeof(char *) + (src->width + 1) * src->height;
	return(r);
}

static void		ft_tetriminos_size(t_tetris *src, U_INT i, U_INT j)
{
	U_INT		x;
	U_INT		t;

	src->height = 0;
	src->width = 0;
	while (src->tetris[i])
	{
		x = j;
		t = 0;
		while (src->tetris[i][x] && src->tetris[i][x] != '#')
			x++;
		if (src->tetris[i][x] == '#')
			src->height += 1;
		while (src->tetris[i][x + t] && src->tetris[y][x + t] == '#')
			t++;
		src->width = (src->width < t) ? t : src->width;
		i++;
	}
}
