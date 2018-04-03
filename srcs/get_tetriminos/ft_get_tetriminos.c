#include "fillit.h"

int				ft_get_tetriminos(char *av, t_list **list)
{
	char		*str;
	char		**tab;
	t_tetris	*p;
	t_list		*tmp;

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
	tmp = *list;
	while (tmp)
	{
		p = (t_tetris *)tmp->content;
		tab = p->tetris;
		ft_size_tetriminos(p);
		p->tetris = ft_new_tetris(tab, p);
		ft_memdel((void **)tab);
		tmp->content_size = sizeof(p->tetris) + sizeof(t_tetris);
		tmp = tmp->next;
	}
	return (0);
}
