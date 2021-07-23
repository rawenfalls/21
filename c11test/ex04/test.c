#include<unistd.h>
#include<stdlib.h>
int	write_me(int i, int e)
{
	if (i<e)
		return (-1);
	if (i == e)
		return(0);
	return (1);
}
int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1) {
		if((f(tab[i], tab[i+1])) > 0)
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char r;
	int tab[] = {1,2,3,4,5};
	r=ft_is_sort(tab, 5, &write_me)+'0';
	write(1,&r,1);
	int tab1[] = {2,2,3,3,5};
	r=ft_is_sort(tab1, 5, &write_me)+'0';
	write(1,&r,1);
	int tab2[] = {2,1,3,4,5};
	r=ft_is_sort(tab2, 5, &write_me)+'0';
	write(1,&r,1);
	
}
