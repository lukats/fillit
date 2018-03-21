#include "libft.h"

U_LONG				ft_countwords(char const *s, char splitter)
{
	U_LONG			count;

	count = 0;
	while (*s)
	{
		while (*s == splitter)
			s++;
		count += (*s) ? 1 : 0;
		while (*s != splitter && *s)
			s++;
	}
	return (count);
}
