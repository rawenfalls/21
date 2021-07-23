char	*ft_strcat(char *dest, char *src)
{
	int	size;
	int	i;

	size = 0;
	while (dest[size] != '\0')
		size++;
	i = -1;
	while (src[++i])
	{
		dest[size + i] = src[i];
	}
	dest[size + i] = '\0';
	return (dest);
}
