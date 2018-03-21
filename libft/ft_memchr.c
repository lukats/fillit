#include "libft.h"

void		*ft_memchr(const void *b, int c, U_LONG len)
{
	U_CHAR	*p;
	U_LONG	i;

	p = (U_CHAR *)b;
	i = 0;
	if (!b || !len)
		return (0);
	while (p[i] != (U_CHAR)c && i < len)
		i++;
	i -= (i == len) ? 1 : 0;
	if (p[i] == (U_CHAR)c)
		return ((void *)p + i);
	return (0);
}
