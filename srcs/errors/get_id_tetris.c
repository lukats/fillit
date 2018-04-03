#include "fillit.h"

int			get_id_tetris(char **lines)
{
	int		y;
	int		i;
	char	*tmp;
	char	*s;

	y = -1;
	i = -1;
	while (lines[++y])
	{
		s = tmp;
		tmp = (tmp) ? ft_strjoin(tmp, lines[y]) : ft_strjoin(lines[y], "");
		ft_memdel((void **)&s);
		s = tmp;
		tmp = (lines[y + 1]) ? ft_strjoin(tmp, "\n") : ft_strjoin(tmp, "");
		ft_memdel((void **)&s);
	}
	while (tmp[++i])
		tmp[i] = (tmp[i] == '#') ? '1' : '0';
	y = ft_atoi_base(tmp, "01");
	ft_memdel((void **)&tmp);
	return (y);
}
