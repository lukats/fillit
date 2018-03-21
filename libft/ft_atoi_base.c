#include "libft.h"

static int		ft_inbase(char c, char const *base);
static U_INT	ft_basetoi(char c, char const *base);

int				ft_atoi_base(char const *str, char const *base)
{
	int			r;
	int			n;
	U_INT		i;

	r = 0;
	n = 1;
	i = 0;
	if (*str == '\0' || !str)
		return (r);
	while (ft_isspace((int)*str))
		str++;
	n = (*str == '-') ? -1 : 1;
	str += (*str == '+' || *str == '-') ? 1 : 0;
	while (ft_inbase(str[i], base))
		i++;
	while (i)
		r += ft_basetoi(*(str++), base) * \
			 ft_xpowni((int)ft_strlen(base), -1 + i--);
	return (n * r);
}

static int		ft_inbase(char c, char const *base)
{
	while (*base)
	{
		if(*base == c)
			return (1);
		base++;
	}
	return (0);
}

static U_INT	ft_basetoi(char c, char const *base)
{
	U_INT		i;

	i = 0;
	while (base[i] != c && base[i])
		i++;
	return (i);
}
