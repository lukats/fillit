#include "fillit.h"

static int		ft_cut_tetriminos(t_list *tmp);

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
	ft_cut_tetriminos(*list);
	if (ft_tetris_mask(*list))
	{
		ft_putendl("error");
		ft_lstdel(list, &ft_lstdelcontent);
		return (1);
	}
	return (0);
}

static int		ft_cut_tetriminos(t_list *tmp)
{
	char		**tab;
	t_tetris	*p;

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
