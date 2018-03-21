#include "libft.h"

int			ft_tolower(int c)
{
	if (ft_isalpha(c) && ft_isupper(c))
		return (c + 32);
	return (c);
}
