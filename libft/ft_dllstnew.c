#include "libft.h"

t_dllst				*ft_dllstnew(void const *content, U_LONG content_size)
{
	t_dllst			*tmp;

	MALLOC_CHECK((tmp = (t_dllst *)ft_memalloc(sizeof(t_dllst))));
	tmp->next = 0;
	tmp->prev = 0;
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
