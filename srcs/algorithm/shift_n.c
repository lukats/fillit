#include "fillit.h"
#include <stdio.h>

char			**shift_n(char **tab, int x, int y)
{
	int		i;
	int		j;
	int		k;


	j = -1;
	i = 0;
	while (++j < x)
		tab[i][j] = j + 65;
	while (tab[++i])
	{
 		j = 0;
		tab[i][x - 1] = tab[i - 1][j];
		while (++j < x)
			tab[i][j - 1] = tab[i - 1][j];
		k = -1;
		while(y == i && --j != -1)
			tab[i][++k] = tab[i - 1][j];
	}
	return (tab);
}


/* char			**shift_n(char **tab, int x, int y) */
/* { */
/* 	int		i; */
/* 	int		j; */
/* 	int		k; */


/* 	j = -1; */
/* 	i = 0; */
/* 	while (++j < x) */
/* 		tab[i][j] = j + 48; */
/* 	while (tab[++i]) */
/* 	{ */
/*  		j = -1; */
/* 		//tab[i][x - 1] = tab[i - 1][j]; */
/* 		k = -1; */
/* 		while (k < x && ++j) */
/* 		{ */
/* 			tab[i][++k] = tab[i - 1][x - j]; */
/* 			printf("j:\t%d\n", j); */
/* 		} */
/* 		k = -1; */
/* 		while(y == i && --j != -1) */
/* 			tab[i][++k] = tab[i - 1][j]; */
/* 	} */
/* 	return (tab); */
/* } */
