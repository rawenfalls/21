int	ft_sqrt(int nb)
{
	long int	i;

	i = 0;
	while (i * i < (long int)nb)
		i++;
	if (i * i == (long int)nb)
		return (i);
	else
		return (0);
}
