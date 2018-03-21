#include "libft.h"

U_LONG				ft_rstrlenic(char const *s, U_LONG i, char c)
{
	U_LONG			j;

	j = 0;
	while (i > 0 && s[i - 1] == c)
		i--;
	while (i > 0 && s[i - 1] != c)
	{
		j++;
		i--;
	}
	return (j);
}
