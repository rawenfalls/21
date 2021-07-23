#include<stdlib.h>
int	size_c(int size, char **strs, char *sep)
{
	int	i;
	int	e;
	int	size_l;

	i = 0;
	e = 0;
	size_l = 0;
	while ((size - e) != 0)
	{
		i = 0;
		while (strs[e][i])
			i++;
		size_l += i;
		e++;
	}
	i = 0;
	while (sep[i])
		i++;
	size_l +=i * (size - 1);
	return (size_l);
}

char	*for_char(int size, char *sep, char *r, char e, int q)
{
	int	w;

	w = 0;
		if (e != size - 1)
		{
			w = -1;
			while (sep[++w])
			{
				r[q] = sep[w];
				q++;
			}
		}
	return (r);
}

int plus_q(char *sep, int size, int e)
{
	int i;

	i = 0;
	if (e != size - 1)
	{
	while (sep[i])
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		e;
	int		size_l;
	char	*r;
	int		q;

	if (size == 0)
		return (0);
	size_l=size_c(size, strs, sep);
	r = (char *)malloc(sizeof(char) * size_l);
	if (r == 0)
		return (0);
	e = 0;
	q = 0;
	while (q < size_l - 1)
	{
		i = 0;
		while (strs[e][i])
		{
			r[q] = strs[e][i];
			i++;
			q++;
		}
		for_char(size, sep, r, e, q);
		q+=plus_q(sep, size, e);
		e++;
	}
	r[q] = '\0';
	return (r);
}

