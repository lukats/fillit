#include "libft.h"

int		ft_putc(int c)
{
	return ((int)write(1, &c, 1));
}
