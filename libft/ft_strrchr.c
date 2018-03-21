#include "libft.h"

char			*ft_strrchr(const char *s, int c)
{
	U_LONG		len;
	U_LONG		i;

	len = ft_strlen(s);
	i = len - 1;
	while (i > 0 && s[i] != (char)c)
		i--;
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (0);
}
