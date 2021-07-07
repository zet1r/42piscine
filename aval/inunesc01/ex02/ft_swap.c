// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	save;

	save = *a;
	*a = *b;
	*b = save;
}

// int	main()
// {
// 	int a = 0;
// 	int b = 0;
// 	ft_swap(&a, &b);
// 	printf("%d \n", a);
// 	printf("%d \n", b);
// }
