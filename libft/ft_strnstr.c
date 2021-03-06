#include "libft.h"

char			*ft_strnstr(const char *big, const char *little, U_LONG len)
{
	U_LONG		i;
	U_LONG		j;
	char		f;

	i = 0;
	f = 'n';
	if (!ft_strlen(little) || !little)
		return ((char *)big);
	while (big[i] && f == 'n' && i < len)
	{
		j = 0;
		while (little[j] && big[i + j] && \
				i + j < len && little[j] == big[i + j])
			j++;
		f = (little[j] == '\0') ? 'y' : 'n';
		i++;
	}
	if (f == 'n')
		return (0);
	return ((char *)big + i - 1);
}
