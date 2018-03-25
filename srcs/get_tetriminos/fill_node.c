# include "fillit.h"

t_tetris	*fill_node(char **tetris, char lettre)
{
	t_tetris	*node;

	MALLOC_CHECK((node = malloc(sizeof(*node))));
	node->tetris = tetris;
	node->letter = lettre;
	return (node);
}
