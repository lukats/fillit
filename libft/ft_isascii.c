#include "libft.h"

int			ft_isascii(int c)
{
	return (0177 >= (U_CHAR)c);
}
