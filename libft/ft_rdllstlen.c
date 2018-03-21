#include "libft.h"

U_LONG			ft_rdllstlen(t_dllst *lst)
{
	if (lst)
		return (1 + ft_rdllstlen(lst->prev));
	return (0);
}
