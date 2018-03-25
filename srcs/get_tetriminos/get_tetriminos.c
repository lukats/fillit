# include "fillit.h"

char	*get_tetriminos(char *file)
{
	char	*lines;
	char	*tmp;
	char	*p;
	int	fd;

	tmp = ft_strnew(0);
	p = tmp;
	fd = open(file, O_RDONLY);
	while (ft_gnl(fd, &lines))
	{
		p = tmp;
		tmp = ft_strjoin(tmp, lines);
		ft_memdel((void **)&p);
	}
	return (tmp);
}
