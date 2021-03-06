#ifndef FILLIT_H
# define FILLIT_H

# include "../libft/libft.h"
# include <fcntl.h>
#include <stdio.h>
# define CHECK_OPEN_FILE(x) if (x <= -1) return (NULL);
# define CHECK_READ_FILE(x) if (x <= -1) return (NULL);

typedef struct			s_tetris
{
	char				**tetris;
	U_INT				height;
	U_INT				width;
	char				letter;
	char			        toto;
}						t_tetris;

int						ft_get_tetriminos(char *av, t_list **list);
char					*replace_char(char *str, char c);
t_list					*put_tetriminos_list(char **lines);
int						ft_tetris_mask(t_list *t);
char					**ft_new_tetris(char **tetris, t_tetris *src);
void					ft_size_tetriminos(t_tetris *src);
int						ft_check_tetri(char **minos);
int						get_id_tetris(char **lines);
int						*tab_id_tetris(t_list *list);
char					**tab_tmp(t_list *list, int *size);
void					ft_free_tab(char **tab);
void					ft_free_list(t_list **l);
void					ft_init_tab(char **tab, int size);
int						ft_backtrack(t_list *l, char **tab, int size);
char					**ft_resolving(t_list *l);
void	my_print_list(t_list *list);
void	print_tab(char **tab);
#endif
