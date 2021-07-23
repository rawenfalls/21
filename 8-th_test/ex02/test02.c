#include<stdio.h>
#include<string.h>
#include<unistd.h>

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

int	main()
{
	printf("%d\n", ft_iterative_power(12, 2));
	printf("%d\n", ft_iterative_power(2, 3));
	printf("%d\n", ft_iterative_power(12, 1));
	printf("%d\n", ft_iterative_power(12, 0));
	printf("%d\n", ft_iterative_power(0 , 0));
	printf("%d\n", ft_iterative_power(12, -1));
	printf("%d\n", ft_iterative_power(2147483647, 2));
	printf("%d\n", ft_iterative_power(1, 1));
	printf("\n");
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(0, 1));
	printf("%d\n", ft_iterative_power(1, 0));
	printf("%d\n", ft_iterative_power(-1, 1));
	printf("%d\n", ft_iterative_power(-2, 4));
	return (0);
}

