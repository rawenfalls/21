#include<stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int	i;
	int				*r;

	r = (int *)malloc(sizeof(int) * ((unsigned int)max - (unsigned int)min));
	if ((max <= min) || (r == 0))
		return (0);
	i = 0;
	while (min < max)
	{
		r[i] = min;
		min++;
		i++;
	}
	return (r);
}
