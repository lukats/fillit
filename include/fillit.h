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
}						t_tetris;

char					*replace_char(char *str, char c);
t_list					*put_tetriminos_list(char **lines);
char					*get_tetriminos(char *file);
t_tetris				*fill_node(char **tetris, char lettre);
char					**shift_n(char **tab, int x, int y);
int						ft_tetris_mask(char **t, U_INT i, U_INT j);
char					**ft_new_tetris(char **tetris, t_tetris *src);
U_LONG					ft_size_tetriminos(t_tetris *src);
U_INT					ft_nlines(U_INT x);

#endif
