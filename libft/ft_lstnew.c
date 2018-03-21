#include "libft.h"

t_list				*ft_lstnew(void const *content, U_LONG content_size)
{
	t_list			*tmp;

	MALLOC_CHECK((tmp = (t_list *)ft_memalloc(sizeof(t_list))));
	tmp->next = 0;
	if (!content)
	{
		tmp->content = 0;
		tmp->content_size = 0;
		return (tmp);
	}
	MALLOC_CHECK((tmp->content = ft_memalloc(content_size)));
	tmp->content = ft_memcpy(tmp->content, content, content_size);
	tmp->content_size = content_size;
	return (tmp);
}
