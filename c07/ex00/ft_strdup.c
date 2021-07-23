#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	char	*r;

	size = 0;
	while (src[size])
		size++;
	r = (char *)malloc(size + 1);
	if (r == 0)
		return (0);
	size = -1;
	while (src[++size])
		r[size] = src[size];
	r[size] = '\0';
	return (r);
}
