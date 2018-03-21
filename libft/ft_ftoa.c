#include "libft.h"

static char		*ft_join(int p1, int p2, int n);

char			*ft_ftoa(float nbr)
{
	int			a;
	int			n;
	char		*r;

	a = 0;
	while (nbr >= 1.0 || nbr <= -1.0)
	{
		nbr += (nbr < 0.0) ? 1.0 : -1.0;
		a += (nbr < 0.0) ? -1 : 1;
	}
	n = (!a && nbr < 0.0) ? 1 : 0;
	nbr *= (nbr < 0.0) ? -1.0 : 1.0;
	while (ft_fmod(nbr, 1.0) != 0.0)
		nbr *= 10.0;
	r = ft_join(a, (int)nbr, n);
	return ((r) ? r : NULL);
}

static char		*ft_join(int p1, int p2, int n)
{
	char		*a;
	char		*b;
	char		*tmp;

	a = (!p1 && n) ? ft_strjoin("-0","") : ft_itoa(p1);
	b = ft_itoa(p2);
	tmp = ft_strjoin(a, ".");
	free(a);
	a = ft_strjoin(tmp, b);
	free(b);
	free(tmp);
	return (a);
}
