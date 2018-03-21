#include "libft.h"

void			*ft_memset(void *b, int c, U_LONG len)
{
	U_LONG		i;
	U_CHAR		*p;

	i = 0;
	p = (U_CHAR *)b;
	if (!b || !len)
		return (b);
	while (i < len)
		p[i++] = (U_CHAR)c;
	return (b);
}
