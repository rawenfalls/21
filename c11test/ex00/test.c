#include<unistd.h>
void	write_me(int i)
{
	char r;
	r=i+'0';
	write(1, &r,1);
}
void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length) {
		f(tab[i]);
		i++;
	}
}

int main()
{
	int tab[] = {1,2,3,4,5};
	ft_foreach(tab, 5, &write_me);
}
