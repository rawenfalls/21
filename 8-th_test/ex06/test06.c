#include<stdio.h>
#include<string.h>
#include<unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= (nb / i))
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main()
{
	printf("%d\n", ft_is_prime(4));
	printf("%d\n", ft_is_prime(10));
	printf("%d\n", ft_is_prime(313));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(-14));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(201));
	printf("%d\n", ft_is_prime(316));
	printf("%d\n", ft_is_prime(293));
	printf("%d\n", ft_is_prime(330));
	printf("%d\n", ft_is_prime(203));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(2));
	return (0);
}


