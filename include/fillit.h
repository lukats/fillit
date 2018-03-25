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

char					*replace_char(char *str, char c);
t_list					*put_tetriminos_list(char **lines);
char					*get_tetriminos(char *file);
t_tetris				*fill_node(char **tetris, char lettre);

#endif
