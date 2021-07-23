int	ft_iterative_power(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0 && nb > 0)
		return (1);
	if (power == 0 && nb < 0)
		return (1);
	i = 1;
	while (0 < power)
	{
		i *= nb;
		power--;
		if (i > 2147483647)
			return (i);
	}
	return (i);
}
