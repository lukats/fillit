#include "libft.h"

void			ft_lstdelcontent(void *content, U_LONG size)
{
	U_CHAR		*p;
	U_LONG		i;

	p = (U_CHAR *)content;
	i = size;
	while (i > 0)
		ft_memdel((void **)p + (--i));
}
