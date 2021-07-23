#include<stdlib.h>
int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*mytab;

	mytab = (int *)malloc(sizeof(*tab) * length);
	if (mytab == 0)
		return (0);
	i = 0;
	while (i < length)
	{
		mytab[i] = f(tab[i]);
		i++;
	}
	return (mytab);
}
