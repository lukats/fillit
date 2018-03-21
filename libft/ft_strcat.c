#include "libft.h"

char			*ft_strcat(char *s, const char *append)
{
	U_LONG		len;
	U_LONG		slen;
	U_LONG		i;
	char		*tmp;

	len = ft_strlen(append);
	slen = ft_strlen(s);
	i = 0;
	tmp = ft_strndup((const char *)s, len + slen + 1);
	free(s);
	s = tmp;
	while (append[i])
	{
		s[slen + i] = append[i];
		i++;
	}
	s[slen + i] = '\0';
	return (s);
}
