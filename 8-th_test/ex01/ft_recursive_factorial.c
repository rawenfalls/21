int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 2147483647)
		return (nb);
	if (nb == 0)
		return (1);
	return (ft_recursive_factorial(nb - 1) * nb);
}
