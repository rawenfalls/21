#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	i;
	int				*r;

	r = (int *)malloc(sizeof(int) * ((unsigned int)max - (unsigned int)min));
	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	if (r == 0)
		return (-1);
	i = 0;
	while (min < max)
	{
		r[i] = min;
		i++;
		min++;
	}
	*range = r;
	return (i);
}
