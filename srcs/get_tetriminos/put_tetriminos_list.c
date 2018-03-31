#include "fillit.h"

t_list			*put_tetriminos_list(char **lines)
{
	int		i;
	char		**tetris;
	t_tetris	*node;
	t_list		*new;
	t_list		*tmp;

	i = -1;
	tmp = 0;
	new = 0;
	node = 0;
	while (lines[++i])
	{
		if (!(tetris = ft_strsplit(lines[i], '\n')))
			return (tmp);
		node  = fill_node(tetris, (char) i + 65);
		new = ft_lstnew(node, sizeof(node) + sizeof(tetris));
		ft_memdel((void **) &node);
		new->next = tmp;
		tmp = new;
	}
	return (tmp);
}
