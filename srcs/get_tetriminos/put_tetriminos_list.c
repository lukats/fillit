#include "fillit.h"

t_tetris	*fill_node(char **tetris, char lettre);

t_list			*put_tetriminos_list(char **lines)
{
	int		i;
	char		**tetris;
	t_tetris	*node;
	t_list		*new;

	i = -1;
	new = 0;
	node = 0;
	while (lines[++i])
	{
		if (!(tetris = ft_strsplit(lines[i], '\n')))
			return (new);
		node  = fill_node(tetris, ((char) i + 65));
		if (!i)
			new = ft_lstnew(node, sizeof(node) + sizeof(tetris) + 1);
		else
			ft_lstaddb(&new, ft_lstnew(node, sizeof(node) + sizeof(tetris) + 1));
		ft_memdel((void **)&node);
	}
	return (new);
}

t_tetris	*fill_node(char **tetris, char lettre)
{
	t_tetris	*node;

	MALLOC_CHECK((node = malloc(sizeof(*node))));
	node->tetris = tetris;
	node->letter = lettre;
	return (node);
}
