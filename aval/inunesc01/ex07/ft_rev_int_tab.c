// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	ri;
	int	swap;

	i = 0;
	ri = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[ri];
		tab[ri] = swap;
		i++;
		ri--;
	}
}
// int	main()
// {
// 	int numbers[6];

// 	numbers[0] = 9;
// 	numbers[1] = 2;
// 	numbers[2] = 7;
// 	numbers[3] = 78;
// 	numbers[4] = 0;
// 	numbers[5] = 1;
// 	int *ponteiro;

// 	ponteiro = numbers;
// 	int size = sizeof(numbers) / sizeof(numbers[0]);
// 	ft_rev_int_tab(ponteiro, size);
// 	printf("---------------\n");
// 	printf("%d \n", numbers[0]);
// 	printf("%d \n", numbers[1]);
// 	printf("%d \n", numbers[2]);
// 	printf("%d \n", numbers[3]);
// 	printf("%d \n", numbers[4]);
// 	printf("%d \n", numbers[5]);
// }
