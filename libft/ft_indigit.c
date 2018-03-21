#include "libft.h"

U_INT			ft_indigit(int n)
{
	U_INT		len;

	len = (n <= 0) ? 1 : 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
