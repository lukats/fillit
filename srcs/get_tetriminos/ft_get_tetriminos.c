#include "fillit.h"

static int		ft_cut_tetriminos(t_list *tmp);

char		*tab_tetris(char *file)
{
	char	*lines;
	char	*tmp;
	char	*p;
	int		fd;

	lines = 0;
	tmp = ft_strnew(0);
	p = tmp;
	fd = open(file, O_RDONLY);
	while (ft_gnl(fd, &lines))
	{
		p = tmp;
		tmp = ft_strjoin(tmp, lines);
		ft_memdel((void **)&p);
		p = tmp;
		tmp = ft_strjoin(tmp, "\n");
		ft_memdel((void **)&p);
	}
	return (tmp);
}

int				ft_get_tetriminos(char *av, t_list **list)
{
	char		*str;
	char		**tab;

	str = tab_tetris(av);
	str = replace_char(str, 'X');
	tab = ft_strsplit(str, 'X');
	ft_memdel((void **)&str);
	if (ft_check_tetri(tab))
	{
		ft_putendl("error");
		ft_free_tab(tab);
		return (1);
	}
	*list = put_tetriminos_list(tab);
	ft_free_tab(tab);
	ft_cut_tetriminos(*list);
	if (ft_tetris_mask(*list) || ft_lstlen(*list) > 26)
	{
		ft_putendl("error");
		ft_free_list(list);
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
		ft_free_tab(tab);
		tmp->content_size = sizeof(p->tetris) + sizeof(t_tetris);
		tmp = tmp->next;
	}
	return (0);
}
