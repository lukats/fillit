#include "fillit.h"

static void		ft_special(t_tetris *s, U_INT i, U_INT j);
static U_INT	ft_special_count(t_tetris *s, U_INT i, U_INT j, U_INT k);

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
	ft_special(src, 0, 0);
}

static void		ft_special(t_tetris *s, U_INT i, U_INT j)
{
	U_INT		k;
	U_INT		t;

	while (i < 3)
	{
		j = 0;
		k = 0;
		while ((s->tetris[i][j] && s->tetris[i][j] != '#') || \
				(s->tetris[i + 1][k] && s->tetris[i + 1][k] != '#'))
		{
			j += (s->tetris[i][j] && s->tetris[i][j] != '#') ? 1 : 0;
			k += (s->tetris[i + 1][k] && s->tetris[i + 1][k] != '#') ? 1 : 0;
		}
		t = ft_special_count(s, i, j, k);
		s->width = (s->width < t) ? t : s->width;
		i++;
	}
}

static U_INT	ft_special_count(t_tetris *s, U_INT i, U_INT j, U_INT k)
{
	U_INT		t;
	U_INT		u;

	t = 0;
	u = 0;
	while ((s->tetris[i][j + t] && s->tetris[i][j + t] == '#') || \
			(s->tetris[i + 1][k + u] && s->tetris[i + 1][k + u] == '#'))
	{
		t += (s->tetris[i][j + t] && s->tetris[i][j + t] == '#') ? 1 : 0;
		u += (s->tetris[i + 1][k + u] && \
				s->tetris[i + 1][k + u] == '#') ? 1 : 0;
	}
	return ((t + u != 0) ? t + u - 1 : 0);
}
