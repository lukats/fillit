#include "libft.h"

int				ft_strnequ(char const *s1, char const *s2, U_LONG n)
{
	if (!ft_strncmp(s1, s2, n))
		return (1);
	return (0);
}
