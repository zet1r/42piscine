#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	**tab2;
	int 	*a = 0;
	tab2 = &a;

	printf("%d\n", ft_ultimate_range(tab2, 5, 15));
	return (0);
}*/
