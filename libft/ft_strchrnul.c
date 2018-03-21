#include "libft.h"

char			*ft_strchrnul(const char *s, int c)
{
	U_LONG		i;
	U_LONG		len;

	i = 0;
	len = ft_strlen(s);
	while (i <= len && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)s + i);
	return ((char *)s + len);
}
