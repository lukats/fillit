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

int						ft_get_tetriminos(char *av, t_list **list);
char					*replace_char(char *str, char c);
t_list					*put_tetriminos_list(char **lines);
char					*get_tetriminos(char *file);
t_tetris				*fill_node(char **tetris, char lettre);
char					**shift_n(char **tab, int x, int y);
int						ft_tetris_mask(char **t);
char					**ft_new_tetris(char **tetris, t_tetris *src);
void					ft_size_tetriminos(t_tetris *src);
int						ft_check_tetri(char **minos);
U_INT					ft_nlines(U_INT x);
int						get_id_tetris(char **lines);

#endif
