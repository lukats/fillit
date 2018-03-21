#include "libft.h"

int			ft_islower(int c)
{
	return (0141 <= (U_CHAR)c && 0172 >= (U_CHAR)c);
}
