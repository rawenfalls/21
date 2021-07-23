char	*ft_strstr(char *str, char *to_find)
{
	int	size;
	int	i;
	int	e;

	size = 0;
	while (to_find[size])
		size++;
	i = 0;
	e = 0;
	while (str[i++])
	{
		if (str[i] == to_find[0])
		{
			while (to_find[e] && (to_find[e] == str[i + e]))
			{
				if (e++ == size -1)
					return (&str[i]);
			}
		}
	}
	if (*to_find == 0)
		return (str);
	return (0);
}
