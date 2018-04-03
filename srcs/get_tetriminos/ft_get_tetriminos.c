#include "fillit.h"

int				ft_get_tetriminos(char *av, t_list **list)
{
	char		*str;
	char		**tab;

	str = get_tetriminos(av);
	str = replace_char(str, 'X');
	tab = ft_strsplit(str, 'X');
	ft_memdel((void **)&str);
	if (ft_check_tetri(tab))
	{
		ft_putendl("error");
		ft_memdel((void **)tab);
		return (1);
	}
	*list = put_tetriminos_list(tab);
	ft_memdel((void **)tab);
	return (0);
}
