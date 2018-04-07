#include "libft.h"

void			ft_lstdelcontent(void *content, U_LONG size)
{
	if (size)
		ft_memdel((void **)&content);
}
