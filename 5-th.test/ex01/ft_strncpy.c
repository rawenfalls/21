#include<stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (src[++i] && i < n)
	{
		dest[i] = src[i];
	}
	while ((i < n) && (dest[i] != '\0'))
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

	int main()
	{
		char i[]="abcd4wsedrtfyguhijo";
		char e[]="dcfgde3ezwtrxytcuyvibuho";
		unsigned int	n=6;
		printf("%s",ft_strncpy(e,i,n));
	}
