#include "libft.h"

int				ft_strncmp(const char *s1, const char *s2, U_LONG len)
{
	return (ft_memcmp((const void *)s1, (const void *)s2, len));
}
