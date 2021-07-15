void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;

	i = 0;
	size--;
	while (i <= size)
	{
		n = tab[i];
		tab[i] = tab[size];
		tab[size] = n;
		size--;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	size2;
	int	tab2[10];
	int	i;

	size2 = 10;
	i = 0;
	while (i <= size2)
	{
		tab2[i] = 1000 + i;
		printf("%d \n", tab2[i]);
		i++;
	}
	ft_rev_int_tab(tab2, 10);
	i = 0;
	while (i < size2)
	{
		printf("%d \n", tab2[i]);
		i++;
	}
	return (0);
}*/
