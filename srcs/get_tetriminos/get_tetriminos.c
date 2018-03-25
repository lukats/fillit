# include "fillit.h"

char	*get_tetriminos(char *file)
{
	int		fd = 0;
	char		*buf = NULL;
	int		ret = 0;
	struct stat	buf_size;

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

t_list	*put_tetriminos_list(char **lines)
{
	int		i;
	char		**tetris;
	t_tetris	*node;
	t_list		*new;
	t_list		*tmp;

	i = -1;
	tmp = NULL;
	while (lines[++i])
	{
		tetris = ft_strsplit(lines[i], '\0');
		node  = fill_node(tetris, (char) i + 65);
		new = ft_lstnew(node, sizeof(node) + sizeof(tetris));
		new->next = tmp;
		tmp = new;
	}
	return (NULL);
}
