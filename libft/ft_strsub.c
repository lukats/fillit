#include "libft.h"

char			*ft_strsub(char const *s, U_INT start, U_LONG len)
{
	U_LONG		i;
	char		*tmp;

	i = 0;
	i --;
	MALLOC_CHECK((tmp = ft_strnew(len)));
	while (++i < len)
		tmp[i] = s[start + i];
	return (tmp);
}
