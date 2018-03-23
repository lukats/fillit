# include "fillit.h"

void	print_list(t_ctrl *ctrl)
{
	t_tetris	*tmp;

	tmp = ctrl->begin;
	while (tmp)
	{
		ft_putnbr(tmp->nb);
		ft_putstr("\n");
		tmp = tmp->next;
	}
}
