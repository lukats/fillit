
int	ft_power_it(int nb, int p)
{
	int	i;
	int	tmp;

	tmp = nb;
	i = 1;
	if (nb == 0)
		return (1);
	while (i < p)
	{
		nb = nb * tmp;
		i++;
	}
	return (nb);
}
