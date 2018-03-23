# include "fillit.h"

t_ctrl	*push_front(t_ctrl *ctrl, char **tab)
{
	t_tetris	*node;

	MALLOC_CHECK((node = malloc(sizeof(*node))));
	node->tetris = tab;
	if (!ctrl)
	{
		MALLOC_CHECK((ctrl = malloc(sizeof(*ctrl))));
		ctrl->begin = NULL;
		ctrl->nb_node = 0;
	}
	node->next = ctrl->begin;
	ctrl->begin = node;
	ctrl->nb_node++;
	ctrl->end = node;
	return (ctrl);
}
