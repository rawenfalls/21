#include<stdio.h>
#include<string.h>
#include<unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (ft_recursive_power(nb, power - 1) * nb);
}

int	main()
{
	printf("%d\n", ft_recursive_power(12, 2));
	printf("%d\n", ft_recursive_power(12, 9));
	printf("%d\n", ft_recursive_power(12, 1));
	printf("%d\n", ft_recursive_power(12, 0));
	printf("%d\n", ft_recursive_power(0 , 0));
	printf("%d\n", ft_recursive_power(12, -1));
	printf("%d\n", ft_recursive_power(2147483647, 1));
	printf("%d\n", ft_recursive_power(1, 1));
	return (0);
}


