#include "libft.h"

char				*ft_strdup(const char *str)
{
	char		*tmp;
	U_LONG		len;
	U_LONG		i;

	len = ft_strlen(str);
	i = 0;
	MALLOC_CHECK((tmp = (char *)malloc((len + 1) * sizeof(char))));
	while (i < len)
	{
		tmp[i] = str[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
