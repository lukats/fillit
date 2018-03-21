#include "libft.h"

void			ft_dllstadd(t_dllst **alst, t_dllst *new)
{
	if (*alst && new)
	{
		(*alst)->prev = new;
		new->next = *alst;
		*alst = new;
	}
}
