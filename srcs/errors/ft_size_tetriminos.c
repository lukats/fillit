#include "fillit.h"

void			ft_size_tetriminos(t_tetris *src)
{
	U_INT		i;
	U_INT		j;
	U_INT		t;

	src->height = 0;
	src->width = 0;
	i = 0;
	while (src->tetris[i])
	{
		j = 0;
		t = 0;
		while (src->tetris[i][j] && src->tetris[i][j] != '#')
			j++;
		if (src->tetris[i][j] == '#')
			src->height += 1;
		while (src->tetris[i][j + t] && src->tetris[i][j + t] == '#')
			t++;
		src->width = (src->width < t) ? t : src->width;
		i++;
	}
}
