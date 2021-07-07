void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				n = tab[i];
				tab[i] = tab[j];
				tab[j] = n;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int size;
	int tab[10] = {7, 2, 0, 6, 8, 3, 9, 13, 4, 1};
	int i;
	
	size = 10;

	i = 0;
	while (i < size)
	{
		printf("%d \n", tab[i]);
		i++;
	}
	ft_sort_int_tab(tab, 10);
	i = 0;
	while (i < size)
	{
		printf("%d \n", tab[i]);
		i++;
	}
	return (0);
}
*/
