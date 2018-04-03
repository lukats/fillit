int	get_id_tetris(char **lines)
{
	int	y;
	int	i;
	char	*tmp;
	char	*s;

	y = -1;
	i = -1;
	while (lines[++y])
	{
		s = tmp;
		if (!y)
			tmp = ft_strjoin(lines[y], "\n");
		else
			tmp = ft_strjoin(tmp, lines[y]);
		ft_memdel((void **)&s);
	}
	while (tmp[++i])
		tmp[i] = (tmp[i] == '#') ? '1' : '0';
	y = ft_atoi_base(tmp, "01");
	return (y);
}
