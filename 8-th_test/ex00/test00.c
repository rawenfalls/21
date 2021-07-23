#include<stdio.h>
#include<string.h>
#include<unistd.h>

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

int	main()
{
	printf("%d\n", ft_iterative_factorial(12));
	printf("%d\n", ft_iterative_factorial(13));
	printf("%d\n", ft_iterative_factorial(14));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(1));
	return (0);
}
