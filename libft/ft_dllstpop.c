#include "libft.h"

void			ft_dllstpop(t_dllst **alst)
{
	t_dllst		*tmp;

	tmp = (*alst)->next;
	if (*alst)
		ft_dllstdelone(alst, &ft_lstdelcontent);
	if (tmp)
		tmp->prev = 0;
	*alst = tmp;
}
