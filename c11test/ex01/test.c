#include<unistd.h>
#include<stdlib.h>
int	write_me(int i)
{
	return (i+1);
}
int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int *mytab;

	mytab = (int *)malloc(sizeof(*tab)*length);
	if (mytab == 0)
		return (0);
	i = 0;
	while (i < length) {
		mytab[i]=f(tab[i]);
		i++;
	}
	return (mytab);
}

int main()
{
	char r;
	int tab[] = {1,2,3,4,5};
	//tab= ft_map(tab, 5, &write_me);
	r=ft_map(tab, 5, &write_me)[0]+'0';
	write(1,&r,1);
}

