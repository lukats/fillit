#include "libft.h"

U_LONG			ft_dllstlen(t_dllst *lst)
{
	if (lst)
		return (1 + ft_dllstlen(lst->next));
	return (0);
}
