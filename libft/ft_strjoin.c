#include "libft.h"

char			*ft_strjoin(char const *s1, char const *s2)
{
	char		*tmp;
	U_LONG		i;

	MALLOC_CHECK((tmp = ft_strnew(ft_strlen(s1) + ft_strlen(s2))));
	i = 0;
	while (*s1)
		tmp[i++] = *(s1++);
	while (*s2)
		tmp[i++] = *(s2++);
	return (tmp);
}
