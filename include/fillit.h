#ifndef FILLIT_H
# define FILLIT_H

# include "../libft/libft.h"
# include <fcntl.h>

# define CHECK_OPEN_FILE(x) if (x <= -1) return (NULL);
# define CHECK_READ_FILE(x) if (x <= -1) return (NULL);

typedef struct			s_tetris
{
	char				**tetris;
	U_INT				height;
	U_INT				width;
	char				letter;
	struct s_tetris		*next;
}						t_tetris;

#endif
