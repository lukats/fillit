#include "libft.h"

void		*ft_memmove(void *dst, const void *src, U_LONG len)
{
	U_CHAR	*p;
	U_CHAR	tmp[len];
	U_INT	i;
	
	p = (U_CHAR *)src;
	i = 0;
	if (!dst || !src || !len)
		return (dst);
	while (i < len)
	{
		tmp[i] = p[i];
		i++;
	}
	p = (U_CHAR *)dst;
	while (i > 0)
	{
		i--;
		p[i] = tmp[i];
	}
	return (dst);
}
