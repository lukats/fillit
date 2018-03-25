# include "fillit.h"

int			main(int ac, char **av)
{
	int		fd;
	char	*p;

	p = 0;
	if (ac == 2)
		p = av[ac - 1];
	fd = open(p, O_RDONLY);
	p = 0;
	while (ft_gnl(fd, &p))
		ft_putendl(p);
	return (0);
}
