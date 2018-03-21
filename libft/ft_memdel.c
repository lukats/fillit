#include "libft.h"

void			ft_memdel(void **ap)
{
	if (!ap)
		return ;
	free(*ap);
	*ap = 0;
}
