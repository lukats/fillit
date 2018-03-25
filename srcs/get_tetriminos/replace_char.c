# include "fillit.h"

char	*replace_char(char *str, char c)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i + 1] && str[i] == '\n' && str[i + 1] != '.' && str[i + 1] != '#')
			str[i + 1] = c;
		i++;
	}
	return (str);
}
