#include "libft.h"

char			*ft_strmapi(char const *s, char (*f)(U_INT, char))
{
	char		*tmp;
	U_INT		i;

	i = 0;
	if (!s || !f)
		return (0);
	i--;
	MALLOC_CHECK((tmp = ft_strnew(ft_strlen(s))));
	while (s[++i])
		tmp[i] = (*f)(i, s[i]);
	return (tmp);
}
