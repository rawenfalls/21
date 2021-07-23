unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d_size;
	unsigned int	s_size;
	int				i;

	i = 0;
	d_size = 0;
	s_size = 0;
	while (dest[d_size])
		d_size++;
	while (src[s_size])
		s_size++;
	while (src[i] && (d_size + i < (size - 1)))
	{
		dest[d_size + i] = src[i];
		i++;
	}
	dest[d_size + i] = '\0';
	return (s_size + size);
}
