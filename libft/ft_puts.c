#include "libft.h"

int		ft_puts(const char *str)
{
	int	i;
	int	r;
	
	i = 0;
	r = 1;
    if (!str)
		return (0);
	while(str[i] && r == 1)
		i += ((r = ft_putc((int)str[i])) == 1) ? 1 : 0;
	return (i);
}
