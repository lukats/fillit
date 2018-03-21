#include "libft.h"

char			*ft_itoa(int n)
{
	char		*tmp;
	int			len;
	U_INT		nb;

	len = (n <= 0) ? 1 : 0;
	nb = (n < 0) ? n * -1 : n;
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	MALLOC_CHECK((tmp = ft_strnew(len)));
	nb = (n < 0) ? n * -1 : n;
	while (nb != 0)
	{
		tmp[len - 1] = '0' + nb % 10;
		nb /= 10;
		len--;
	}
	tmp[0] = (n < 0) ? '-' : tmp[0];
	tmp[0] = (n == 0) ? '0' : tmp[0]; 
	return (tmp);
}
