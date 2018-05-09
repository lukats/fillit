#include "fillit.h"

int			ft_tetris_mask(t_list *t)
{
	int		i;
	int		j;
	int		*p;
	int		m[19] = {71, 210, 113, 75, 116, 201, 23, 147, 114, 89, \
			39, 154, 27, 15, 85, 99, 90, 54, 153};

	i = -1;
	p = tab_id_tetris(t);
	while (++i < (int)ft_lstlen(t))
	{
		j = 0;
		while (p[i] != m[j] && j < 19)
			j++;
		if (j == 19)
		{
			ft_memdel((void **)&p);
			return (1);
		}
	}
	ft_memdel((void **)&p);
	return (0);
}
