#include<stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	e;

	i = -1;
	while (++i < --size)
	{
		e = tab[i];
		tab[i] = tab[size];
		tab[size] = e;
	}
	i=-1;
	char e1;
	size=5;
	while(++i<size){
		e1=tab[i]+'0';
		write(1,&e1,1);
	}
}

int main(){
	int i[5]={1,2,3,4,5};
	ft_rev_int_tab(i, 5);
}

