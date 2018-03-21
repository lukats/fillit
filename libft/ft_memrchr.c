#include "libft.h"

void		*ft_memrchr(const void *b, int c, U_LONG len)
{
	U_CHAR	*p;
	U_LONG	i;

	p = (U_CHAR *)b;
	i = len - 1;
	if (!b || !len)
		return (0);
	while (p[i] != (U_CHAR)c && i > 0)
		i--;
	if (p[i] == (U_CHAR)c)
		return (p + i);
	return (0);
}
