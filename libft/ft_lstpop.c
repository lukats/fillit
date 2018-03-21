#include "libft.h"

void			ft_lstpop(t_list **alst)
{
	t_list		*tmp;

	tmp = (*alst)->next;
	if (*alst)
		ft_lstdelone(alst, &ft_lstdelcontent);
	*alst = tmp;
}
