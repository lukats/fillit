#ifndef FILLIT_H
# define FILLIT_H

# include "../libft/libft.h"

typedef struct		s_tetris
{
	char		**tetris;
	char		letter;
	struct s_tetris	*next;
}			t_tetris;


#endif
