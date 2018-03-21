#include "libft.h"

void		ft_bzero(void *b, U_LONG len)
{
	if (len)
		b = ft_memset(b, 0, len);
}
