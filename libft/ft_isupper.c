#include "libft.h"

int			ft_isupper(int c)
{
	return (0101 <= (U_CHAR)c && 0132 >= (U_CHAR)c);
}
