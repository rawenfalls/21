#include<stdio.h>
#include<string.h>
#include<unistd.h>

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

int	main()
{
	printf("%d\n", ft_sqrt(10));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(-14));
	printf("%d\n", ft_sqrt(3));
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2147483647));
	return (0);
}
