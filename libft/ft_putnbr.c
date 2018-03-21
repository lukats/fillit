#include "libft.h"

void			ft_putnbr(int n)
{
	U_INT		nb;

	nb = (n < 0) ? n * -1 : n;
	if (n < 0)
		ft_putchar('-');
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
		
	}
	else
		ft_putchar('0' + nb);
}
