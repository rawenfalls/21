int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 1;
	while (++i <= (nb / 2))
	{
		if ((nb % i) == 0)
			return (0);
	}
	return (1);
}
