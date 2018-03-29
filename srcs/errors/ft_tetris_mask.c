#include "fillit.h"

static int			ft_tetris_maska(char **t, U_INT i, U_INT j)
static int			ft_tetris_maskb(char **t, U_INT i, U_INT j)

int					ft_tetris_mask(char **t, U_INT i, U_INT j)
{
	if (t[i][j] == '#' && t[i + 1][j] == '#' && t[i + 1][j + 1] == '#' \
			&& t[i + 1][j + 2] == '#')
		return (1);
	else if (t[i][j] == '#' && t[i][j + 1] == '#' && t[i + 1][j] == '#' \
			&& t[i + 2][j] == '#')
		return (1);
	else if (t[i][j] == '#' && t[i][j + 1] == '#' && t[i][j + 2] == '#' \
			&& t[i + 1][j + 2] == '#')
		return (1);
	else if (t[i][j + 1] == '#' && t[i + 1][j + 1] == '#' \
			&& t[i + 2][j + 1] == '#' && t[i + 2][j] == '#')
		return (1);
	else if (t[i][j] == '#' && t[i][j + 1] == '#' && t[i][j + 2] == '#' \
			&& t[i + 1][j] == '#')
		return (1);
	else if (t[i][j] == '#' && t[i][j + 1] == '#' && t[i + 1][j + 1] == '#' \
			&& t[i + 2][j + 1] == '#')
		return (1);
	return (ft_tetris_maska(t, i, j));
}

static int			ft_tetris_maska(char **t, U_INT i, U_INT j)
{
	if (t[i + 1][j] == '#' && t[i + 1][j + 1] == '#' \
			&& t[i + 1][j + 2] == '#' && t[i][j + 2] == '#')
		return (1);
	else if (t[i][j] == '#' && t[i + 1][j] == '#' && t[i + 2][j] == '#' \
			&& t[i + 2][j + 1] == '#')
		return (1);
	else if (t[i][j] == '#' && t[i][j + 1] == '#' && t[i][j + 2] == '#' \
			&& t[i + 1][j + 1] == '#')
		return (1);
	else if (t[i][j + 1] == '#' && t[i + 1][j + 1] == '#' \
			&& t[i + 2][j + 1] == '#' && t[i + 1][j] == '#')
		return (1);
	else if (t[i + 1][j] == '#' && t[i + 1][j + 1] == '#' \
			&& t[i + 1][j + 2] == '#' && t[i][j + 1] == '#')
		return (1);
	else if (t[i][j] == '#' && t[i + 1][j] == '#' && t[i + 1][j + 1] == '#' \
			&& t[i + 2][j] == '#')
		return (1);
	return (ft_tetris_maskb(t, i, j));
}

static int			ft_tetris_maskb(char **t, U_INT i, U_INT j)
{
	if (t[i][j] == '#' && t[i][j + 1] == '#' \
			&& t[i + 1][j] == '#' && t[i + 1][j + 1] == '#')
		return (1);
	else if (t[i][j] == '#' && t[i][j + 1] == '#' && t[i][j + 2] == '#' \
			&& t[i][j + 3] == '#')
		return (1);
	else if (t[i][j] == '#' && t[i + 1][j] == '#' && t[i + 2][j] == '#' \
			&& t[i + 3][j] == '#')
		return (1);
	else if (t[i][j] == '#' && t[i][j + 1] == '#' \
			&& t[i + 1][j + 1] == '#' && t[i + 1][j + 2] == '#')
		return (1);
	else if (t[i][j + 1] == '#' && t[i + 1][j] == '#' \
			&& t[i + 1][j + 1] == '#' && t[i + 2][j] == '#')
		return (1);
	else if (t[i][j + 1] == '#' && t[i][j + 2] == '#' \
			&& t[i + 1][j + 1] == '#' && t[i + 1][j] == '#')
		return (1);
	else if (t[i][j] == '#' && t[i + 1][j] == '#' && t[i + 1][j + 1] == '#' \
			&& t[i + 2][j + 1] == '#')
		return (1);
	return (0);
}
