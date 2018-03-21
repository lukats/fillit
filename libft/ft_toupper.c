#include "libft.h"

int			ft_toupper(int c)
{
	if (ft_isalpha(c) && ft_islower(c))
		return (c - 32);
	return (c);
}
