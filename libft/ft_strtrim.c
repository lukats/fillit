#include "libft.h"

char			*ft_strtrim(char const *s)
{
	char		*tmp;
	U_LONG		len;
	U_LONG		i;

	i = 0;
	len = ft_strlen(s);
	while (((ft_isbspace((int)s[i]) || \
					ft_isbspace((int)s[((len == 0) ? 1 : len) - 1]))) && s[i])
	{
		i += (ft_isbspace((int)s[i])) ? 1 : 0;
		len -= (ft_isbspace((int)s[len - 1])) ? 1 : 0;
	}
	MALLOC_CHECK((tmp = ft_strnew(len - ((len != 0) ? i : 0))));
	while (len > i)
	{
		tmp[len - i - 1] = s[len - 1];
		len--;
	}
	return (tmp);
}
