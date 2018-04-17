#include "fillit.h"

void			ft_free_list(t_list **l)
{
	t_tetris	*t;
	t_list		*tl;

	t = 0;
	tl = *l;
	while (tl)
	{
		t = (t_tetris *)tl->content;
		ft_free_tab(t->tetris);
		tl = tl->next;
	}
	ft_lstdel(l, &ft_lstdelcontent);
}
