#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
int	write_me(char *q)
{
	char e[]="bleat";
	int i=-1;
	while (e[++i])
		if (e[i] != q[i])
			return (0);
	return (1);
}
int	ft_any(char **tab, int(*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i][0] != 0)
	{
		if (f(tab[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}

int main()
{
	char r;
	char *tab[] = {"hello","word"};
	r=ft_any(tab, &write_me)+'0';
	write(1,&r,1);
	char *tab1[] = {"hello","word","bleat"};
	r=ft_any(tab1, &write_me)+'0';
	write(1,&r,1);
}

