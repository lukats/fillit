# include "fillit.h"

t_ctrl	*pop_front(t_ctrl *ctrl)
{
	t_tetris	*tmp;

	tmp = ctrl->begin;
	ctrl->begin = tmp->next;
	free(tmp);
	tmp = NULL;
	ctrl->nb_node--;
	return (ctrl);
}

t_ctrl	*distroy_list(t_ctrl *ctrl)
{
	t_tetris	*tmp;

	while (ctrl->nb_node)
		ctrl = pop_front(ctrl);
	free(ctrl);
	ctrl = NULL;
	return (NULL);
}
