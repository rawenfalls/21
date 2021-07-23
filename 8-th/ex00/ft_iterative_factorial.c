int	ft_iterative_factorial(int nb)
{
	int	f;

	f = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		f *= nb;
		nb--;
	}
	return (f);
}
