#include "libft.h"

char			*ft_itoa_base(int n, char const *base)
{
	char		*tmp;
	U_INT		len;
	U_INT		nb;
	U_LONG		b;

	len = ft_indigit(n);
	nb = (n < 0) ? n * -1 : n;
	b = ft_strlen(base);
	MALLOC_CHECK((tmp = ft_strnew(len)));
	while (nb != 0)
	{
		tmp[len - 1] = base[nb % b];
		nb /= 10;
		len--;
	}
	tmp[0] = (n < 0) ? '-' : tmp[0];
	tmp[0] = (n == 0) ? '0' : tmp[0]; 
	return (tmp);
}
