int	check(char latter)
{
	if (((latter >= 'A') && (latter <= 'Z'))
		|| ((latter >= 'a') && (latter <= 'z'))
		|| ((latter >= '0') && (latter <= '9')))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (i == 0 && ((str[i] >= 'a') && (str[i] <= 'z')))
			str[i] = str[i] - 32;
		if (i != 0 && !check(str [i -1])
			&& ((str[i] >= 'a') && (str[i] <= 'z')))
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
