#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*tmp;
	t_list		*new;
	t_list		*head;

	tmp = (*f)(lst);
	MALLOC_CHECK((new = ft_lstnew(tmp->content, tmp->content_size)));
	head = new;
	lst = lst->next;
	while (lst)
	{
		tmp = (*f)(lst);
		MALLOC_CHECK((new->next = ft_lstnew(tmp->content, tmp->content_size)));
		new = new->next;
		lst = lst->next;
	}
	return (head);
}
