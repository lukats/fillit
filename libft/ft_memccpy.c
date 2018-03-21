#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, U_LONG len)
{
	U_CHAR	*d;
	U_CHAR	*s;
	U_LONG	i;

	d = (U_CHAR *)dst;
	s = (U_CHAR *)src;
	i = 0;
	if (!dst || !src || !len)
		return (0);
	while(s[i] != (U_CHAR)c && i < len)
		d[i++] = (U_CHAR)c;
	if (s[i] == (U_CHAR)c)
		return (dst + i);
	return (0);
}
