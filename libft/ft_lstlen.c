#include "libft.h"

U_LONG			ft_lstlen(t_list *lst)
{
	if (lst)
		return (1 + ft_lstlen(lst->next));
	return (0);
}
