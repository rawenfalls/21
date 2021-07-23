#include<stdio.h>
#include<string.h>
#include<unistd.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
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

int	main()
{
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(10));
	printf("%d\n", ft_find_next_prime(313));
	printf("%d\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(-14));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(201));
	printf("%d\n", ft_find_next_prime(316));
	printf("%d\n", ft_find_next_prime(293));
	printf("%d\n", ft_find_next_prime(330));
	return (0);
}



