#include "libft.h"

void			ft_dllstpopb(t_dllst **alst)
{
	t_dllst		*n;
	t_dllst		*p;

	n = *alst;
	p = (n->next) ? n : 0;
	while (n->next)
	{
		p = n;
		n = n->next;
	}
	ft_dllstdelone(&n, &ft_lstdelcontent);
	if (p)
		p->next = 0;
}
