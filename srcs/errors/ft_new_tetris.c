#include "fillit.h"

static void		ft_cpy_tetriminos(char **dst, t_tetris *src, U_INT y, U_INT x);

char			**ft_new_tetris(char **tetris, t_tetris *src)
{
	char		**tmp;
	U_INT		i;
	U_INT		j;

	tmp = ft_malloc_tab((int)src->height, (int)src->width);
	i = 0;
	while (tetris[i])
	{
		j = 0;
		while (tetris[i][j])
		{
			if (ft_tetris_mask(tetris, i, j))
				ft_cpy_tetriminos(tmp, src, i, j);
			j++;
		}
		i++;
	}
	return (tmp);
}

static void		ft_cpy_tetriminos(char **dst, t_tetris *src, U_INT y, U_INT x)
{
	U_INT		i;
	U_INT		j;

	i = 0;
	while (i < src->height)
	{
		j = 0;
		while (j < src->width)
		{
			dst[i][j] = src->tetris[y + i][x + j]
			j++;
		}
		i++;
	}
}
