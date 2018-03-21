#include "libft.h"

void			ft_striteri(char *s, void (*f)(U_INT i, char *))
{
	U_INT		i;

	i = 0;
	if (!s || !f)
		return ;
	while (*s)
		(*f)(i++, s++);
}
