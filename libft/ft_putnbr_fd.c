#include "libft.h"

void			ft_putnbr_fd(int n, int fd)
{
	U_INT		nb;

	nb = (n < 0) ? n * -1 : n;
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
		
	}
	else
		ft_putchar_fd('0' + nb, fd);
}
