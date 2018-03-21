#include "libft.h"

void			ft_dllstdelone(t_dllst **alst, void (*del)(void *, U_LONG))
{
	if (*alst)
	{
		if((*alst)->content)
			(*del)((*alst)->content, (*alst)->content_size);
		ft_memdel((void **)*alst);
	}
}
