#include "libft.h"

int			ft_memcmp(const void *b1, const void *b2, U_LONG len)
{
	U_CHAR	*a;
	U_CHAR	*b;
	U_INT	i;

	a = (U_CHAR *)b1;
	b = (U_CHAR *)b2;
	i = 0;

	if ((!b1 && !b2) || !len)
		return (0);
	else if (!b1)
		return ((int)-(*b));
	else if (!b2)
		return ((int)*a);
	while (a[i] == b[i] && i < len)
		i++;
	i -= (i == len) ? 1 : 0;
	return ((int)(a[i] - b[i]));
}
