#include "libft.h"

U_LONG			ft_strlcpy(char *dst, const char *src, U_LONG dstsize)
{
	U_LONG		i;
	U_LONG		len;

	i = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
