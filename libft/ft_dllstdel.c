#include "libft.h"

void 			ft_dllstdel(t_dllst **alst, void (*del)(void *, U_LONG))
{
	if (*alst)
		if((*alst)->content)
			(*del)((*alst)->content, (*alst)->content_size);
	if ((*alst)->next)
		ft_dllstdel(&(*alst)->next, del);
	if (*alst)
		ft_memdel((void **)(*alst));
}
