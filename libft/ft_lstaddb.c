#include "libft.h"

void			ft_lstaddb(t_list **alst, t_list *new)
{
	t_list		*tmp;

	tmp = (*alst);
	if (*alst && new)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}
