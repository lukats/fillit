#include "fillit.h"

void	my_print_list(t_list *list)
{
	t_tetris	*tmp;
	char	**tab;
	int	i;
	char	c;

	while (list)
	{
		i = -1;
	        tmp =  list->content;
		tab = tmp->tetris;
		c = (char) tmp->letter;
		while (tab[++i])
		{
			ft_putchar(c);
			ft_putendl(tab[i]);
		}

		list = list->next;
	}
}

void	print_tab(char **tab)
{
	int	i;

	i = 0;
	while(tab[i])
	{
		/* ft_putstr(tab[i]); */
		ft_putendl(tab[i]);
		i++;
	}
	ft_putstr("\n");
}

static void		ft_print_tab(char **tab);

int				main(int ac, char **av)
{
	t_list		*list;
	char		**tab;
	t_tetris	*t;

	list = 0;
	tab = 0;
	if (ac == 2)
	{
		if (ft_get_tetriminos(av[ac - 1], &list))
			return (1);
		tab = ft_resolving(list);
		ft_print_tab(tab);
		if (tab)
			ft_free_tab(tab);
		ft_free_list(&list);
	}
	else
		ft_putendl("usage : fillit [file] - Only one parameter");
	return ((ac == 2) ? 0 : 1);
}

static void		ft_print_tab(char **tab)
{
	int			i;

	i = -1;
	if (tab)
		while (tab[++i])

			ft_putendl(tab[i]);
	else
		ft_putendl("tab it is null");
}
