#include "libft.h"

static char			*ft_buffer(char *s, char **line)
{
	unsigned long	i;
	char			*tmp;

	i = 0;
	while (s[i] != '\0' && s[i] != '\n')
		i++;
	if (s[i] == '\n')
	{
		*line = ft_strsub(s, 0, i);
		tmp = s;
		s = ft_strsub(s, (i + 1), (ft_strlen(s) - i));
		free(tmp);
		return (s);
	}
	if (s[i] == '\0' && i > 0)
	{
		tmp = s;
		s = (char *)malloc(2 * sizeof(char));
		*line = tmp;
	}
	return (s);
}

static char			*ft_line(char *s, char **line)
{
	unsigned long	i;
	char			*tmp;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
		{
			*line = ft_strsub(s, 0, (i));
			tmp = s;
			s = ft_strsub(s, (i + 1), (ft_strlen(s) - i));
			free(tmp);
			return (s);
		}
		i++;
	}
	return (s);
}

static char			*suppr(char *s)
{
	if (s)
		free(s);
	s = 0;
	return (s);
}

int					ft_gnl(int const fd, char **line)
{
	static char		*s;
	char			*tmp;
	long			r;
	char			buf[BUFF_SIZE + 1];

	*line = 0;
	tmp = 0;
	while ((r = read(fd, buf, BUFF_SIZE)))
	{
		if (r < 0)
			return (-1);
		buf[r] = '\0';
		tmp = s;
		s = ft_strjoin(s, buf);
		tmp = suppr(tmp);
		s = ft_line(s, line);
		if (!(*line == 0))
			return (1);
	}
	s = ft_buffer(s, line);
	if (!(*line == 0))
		return (1);
	s = suppr(s);
	return (0);
}
