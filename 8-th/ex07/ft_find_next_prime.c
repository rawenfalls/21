int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		nb = 2;
	i = 2;
	while (i <= (nb / i))
	{
		if ((nb % i) == 0)
		{
			nb++;
			i =1;
		}
		i++;
	}
	return (nb);
}
