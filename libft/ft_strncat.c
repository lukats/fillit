#include "libft.h"

char			*ft_strncat(char *s, const char *append, U_LONG count)
{
	U_LONG		slen;
	U_LONG		i;
	char		*tmp;

	slen = ft_strlen(s);
	i = 0;
	tmp = ft_strndup((const char *)s, count + slen + 1);
	free(s);
	s = tmp;
	while (i < count)
	{
		s[slen + i] = append[i];
		i++;
	}
	s[slen + i] = '\0';
	return (s);
}
