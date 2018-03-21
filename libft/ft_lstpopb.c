#include "libft.h"

void			ft_lstpopb(t_list **alst)
{
	t_list		*n;
	t_list		*p;

	n = *alst;
	p = (n->next) ? n : 0;
	while (n->next)
	{
		p = n;
		n = n->next;
	}
	ft_lstdelone(&n, &ft_lstdelcontent);
	if (p)
		p->next = 0;
}
