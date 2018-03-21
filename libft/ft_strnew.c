#include "libft.h"

char			*ft_strnew(U_LONG size)
{
	return ((char *)ft_memalloc(size + 1));
}
