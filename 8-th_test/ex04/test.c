#include<stdio.h>
#include<string.h>
#include<unistd.h>

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	
	return (ft_fibonacci(index-1)+ft_fibonacci(index-2));
}

int	main()
{
	printf("%d\n", ft_fibonacci(10));
	printf("%d\n", ft_fibonacci(9));
	printf("%d\n", ft_fibonacci(-14));
	printf("%d\n", ft_fibonacci(3));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	return (0);
}
