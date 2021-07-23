int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	char	*r;
	int		i;
	int		j;
	int		len;

	len = 0;
	while (tab[len] != 0)
		len++;
	i = -1;
	while (++i < len - 1)
	{
		j = i;
		while (++j < len)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				r = tab[i];
				tab[i] = tab[j];
				tab[j] = r;
			}
		}
	}
}
