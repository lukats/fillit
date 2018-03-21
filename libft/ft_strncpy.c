#include "libft.h"

char			*ft_strncpy(char *dst, const char *src, U_LONG len)
{
	U_LONG		i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while(i < len)
		dst[i++] = '\0';
	return (dst);
}
