#include "libft.h"

char			*ft_stpcpy(char *dst, const char *src)
{
	U_LONG		i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = src[i];
	return (dst + i);
}
