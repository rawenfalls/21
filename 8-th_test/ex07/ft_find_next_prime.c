int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 0)
		nb = 2;
	i = 1;
	while (++i <= (nb / 2))
	{
		if ((nb % i) == 0)
		{
			nb++;
			i =1;
		}
	}
	return (nb);
}
