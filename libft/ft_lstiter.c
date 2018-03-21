#include "libft.h"

void			ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (!lst)
		return ;
	(*f)(lst);
	ft_lstiter(lst->next, f);
}
