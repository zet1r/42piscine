// #include <stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int	save;

	save = *a;
	*a = *b;
	*b = save;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	ii;

	i = 0;
	while (i < (size - 1))
	{
		ii = i + 1;
		while (ii < size)
		{
			if (tab[i] > tab[ii])
			{
				ft_swap(&tab[i], &tab[ii]);
			}
			ii++;
		}
		i++;
	}
}
// int	main()
// {
// 	int list[6] = {5, 0, 3, 90, 4, 3};

// 	int size;

// 	size = sizeof(list) / sizeof(list[0]);
// 	ft_sort_int_tab(list, size);

// 	printf("%d", list[0]);
// 	printf("%d", list[1]);
// 	printf("%d", list[2]);
// 	printf("%d", list[3]);
// 	printf("%d", list[4]);
// 	printf("%d", list[5]);
// }
