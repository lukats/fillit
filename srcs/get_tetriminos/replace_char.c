# include "fillit.h"

char	*replace_char(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i + 1] && str[i] == '\n' && str[i + 1] != '.' && str[i + 1] != '#')
			str[i + 1] = 'X';
		i++;
	}
	return (str);
}
