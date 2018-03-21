#include "libft.h"

U_LONG			ft_strlcat(char *dst, const char *src, U_LONG dstsize)
{
	U_LONG		len;
	U_LONG		slen;
	U_LONG		i;

	len = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (len + slen);
	while (i < dstsize - len - 1)
	{
		dst[len + i] = src[i];
		i++;
	}
	if (!(len > dstsize))
		dst[len + i] = '\0';
	return (len + slen);
}
