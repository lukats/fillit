#include "libft.h"

void			ft_dllstaddb(t_dllst **alst, t_dllst *new)
{
	t_dllst		*tmp;

	tmp = (*alst);
	if (*alst && new)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
		new->prev = tmp;
	}
}
