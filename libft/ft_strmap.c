#include "libft.h"

char			*ft_strmap(char const *s, char (*f)(char))
{
	char		*tmp;
	U_LONG		i;

	i = 0;
	if (!s || !f)
		return (0);
	i--;
	MALLOC_CHECK((tmp = ft_strnew(ft_strlen(s))));
	while (s[++i])
		tmp[i] = (*f)(s[i]);
	return (tmp);
}
