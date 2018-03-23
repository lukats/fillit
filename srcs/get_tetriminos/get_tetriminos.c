# include "fillit.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

char	*get_tetriminos(char *file)
{
	int		fd = 0;
	char		*buf = NULL;
	int		ret = 0;
	char		**tab;
	struct stat	buf_size;

	int	i;
	CHECK_OPEN_FILE((fd = open(file, O_RDONLY)));
	if (stat(file, &buf_size) == -1)
		return (NULL);
	MALLOC_CHECK((buf = malloc(sizeof(char) * buf_size.st_size + 1)));
	CHECK_READ_FILE((ret = read(fd, buf, buf_size.st_size)));
	buf[ret] = '\0';
	if (close(fd) == -1)
		return (NULL);
	return (buf);
}

t_ctrl	*put_tetriminos_list(char *buf)
{
	int	i;

	i = -1;
	while (*buf)
	{
		if (i == 4)
		{
			ft_putstr("ici\n");
			i = -1;
		}
		i++;
		buf++;
	}
}
