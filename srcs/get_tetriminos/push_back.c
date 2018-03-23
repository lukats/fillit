# include "fillit.h"

t_ctrl	*push_back(t_ctrl *ctrl, char **tab)
{
	t_tetris	*node;

	if (!ctrl)
		ctrl = push_front(ctrl, tab);
	else
	{
		MALLOC_CHECK((node = malloc(sizeof(*node))));
		node->next = NULL;
		ctrl->end->next = node;
		ctrl->end = node;
		ctrl->nb_node++;
	}
	return (ctrl);
}
