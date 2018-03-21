#include "libft.h"

void			*ft_memalloc(U_LONG size)
{
	U_CHAR		*tmp;

	MALLOC_CHECK((tmp = (U_CHAR *)malloc(size)));
	return (ft_memset((void *)tmp, 0, size));
}
