#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	i = 0;
	while (min < max)
	{	
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	int *tab;
	tab = ft_range(-9, 9);
	int	pos;
//	int	*tab1;

//	tab1 = (int *)malloc(sizeof(*tab1) * (5));
//	tab1 = ft_range(5, 10);
	pos = 0;
	while (pos < 9 - (-9))
	{
		printf("%d\n", tab[pos]);
		pos++;
	}
	return (0);
}*/
