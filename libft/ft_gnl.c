#include "libft.h"

static int			ft_findn(char **s, char **line);
static int			ft_endread(char **s, char **line);

int					ft_gnl(int const fd, char **line)
{
	static char		*s;
	char			*tmp;
	long			r;

	if (*line)
		ft_memdel((void **)line);
	MALLOC_CHECK_GNL((*line = ft_strnew(BUFF_SIZE)));
	if (!s)
		MALLOC_CHECK_GNL((s = ft_strnew(0)));
	tmp = s;
	while ((r = read(fd, *line, BUFF_SIZE)))
	{
		if (r < 0)
			return (-1);
		(*line)[r] = '\0';
		tmp = s;
		MALLOC_CHECK_GNL((s = ft_strjoin(s, *line)));
		ft_memdel((void **)&tmp);
		if ((r = (long)ft_findn(&s, line)))
			return ((int)r);
	}
	if (!ft_findn(&s, line))
		return (ft_endread(&s, line));
	return (0);
}

static int			ft_findn(char **s, char **line)
{
	U_LONG			i;
	char			*tmp;

	i = 0;
	while ((*s)[i])
	{
		if ((*s)[i] == '\n')
		{
			tmp = *line;
			MALLOC_CHECK_GNL((*line = ft_strsub(*s, 0, i)));
			ft_memdel((void **)&tmp);
			tmp = *s;
			MALLOC_CHECK_GNL((*s = ft_strsub(*s, (U_INT)(i + 1), \
							ft_strlen(*s) - i)));
			ft_memdel((void **)&tmp);
			return (1);
		}
		i++;
	}
	return (0);
}

static int			ft_endread(char **s, char **line)
{
	char			*tmp;

	tmp = *line;
	MALLOC_CHECK_GNL((*line = ft_strsub(*s, 0, ft_strlen(*s))));
	ft_memdel((void **)&tmp);
	if (!(**s))
	{
		ft_memdel((void **)s);
		return (0);
	}
	ft_memdel((void **)s);
	return (1);

}
