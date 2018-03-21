#include "libft.h"

char				*ft_strndup(const char *str, U_LONG len)
{
	char		*tmp;
	U_LONG		i;

	i = 0;
	MALLOC_CHECK((tmp = (char *)malloc((len + 1) * sizeof(char))));
	while (str[i] && i < len)
	{
		tmp[i] = str[i];
		i++;
	}
	while (i <= len)
		tmp[i++] = '\0';
	return (tmp);
}
