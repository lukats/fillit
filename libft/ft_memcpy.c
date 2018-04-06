#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, U_LONG len)
{
	U_CHAR	*d;
	U_CHAR	*s;
	U_INT	i;

	d = (U_CHAR *)dst;
	s = (U_CHAR *)src;
	i = 0;
	if (!dst || !src || !len)
		return (dst);
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
