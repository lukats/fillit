#ifndef FILLIT_H
# define FILLIT_H

# include "../libft/libft.h"

# define CHECK_OPEN_FILE(x) if (x <= -1) return (NULL);
# define CHECK_READ_FILE(x) if (x <= -1) return (NULL);

typedef struct		s_tetris
{
	char		**tetris;
	char		letter;
	int		nb;
	struct s_tetris	*next;
}			t_tetris;

typedef struct		s_ctrl
{
        t_tetris	*begin;
	int		nb_node;
        t_tetris	*end;
}			t_ctrl;

char	*get_tetriminos(char *file);
t_ctrl	*push_front(t_ctrl *ctrl, char **tab);
t_ctrl	*push_back(t_ctrl *ctrl, char **tab);
void	print_list(t_ctrl *ctrl);
t_ctrl	*pop_front(t_ctrl *ctrl);
t_ctrl	*distroy_list(t_ctrl *ctrl);
t_ctrl	*put_tetriminos_list(char *buf);
#endif
