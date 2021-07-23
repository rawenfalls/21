char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				size;

	size = 0;
	while (dest[size] != '\0')
		size++;
	i = -1;
	while (src[++i] && i < nb)
	{
		dest[size + i] = src[i];
	}
	dest[size + i] = '\0';
	return (dest);
}
