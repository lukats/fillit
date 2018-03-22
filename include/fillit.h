#ifndef FILLIT_H
# define FILLIT_H

# include "../libft/libft.h"

typedef struct			s_tetris
{
	char				**tetris;
	U_INT				h;
	U_INT				w;
	char				c;
	struct s_tetris		*next;
}						t_tetris;

#endif
