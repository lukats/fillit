#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char		**tmp;
	U_LONG		w;
	U_LONG		i;
	U_LONG		j;

	w = ft_countwords(s, c);
	i = ft_strlen(s);
	j = 0;
	MALLOC_CHECK((tmp = (char **)ft_memalloc(sizeof(char *) * (w + 1))));
	MALLOC_CHECK((tmp[w] = ft_strnew(0)));
	while (w > 0)
	{
		MALLOC_CHECK((tmp[w - 1] = ft_strnew((j = ft_rstrlenic(s, i, c)))));
		while (i > 0 && s[i - 1] == c)
			i--;
		while (i > 0 && s[i - 1] != c)
			tmp[w - 1][(j--) - 1] = s[(i--) - 1];
		w--;
	}
	return (tmp);
}
