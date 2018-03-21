#include "libft.h"

int			ft_isprint(int c)
{
	return (040 <= (U_CHAR)c && 0176 >= (U_CHAR)c);
}
