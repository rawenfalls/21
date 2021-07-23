int	ft_iterative_power(int nb, int power)
{
	int	i;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	i = 1;
	while (0 < power)
	{
		i *= nb;
		power--;
	}
	return (i);
}
