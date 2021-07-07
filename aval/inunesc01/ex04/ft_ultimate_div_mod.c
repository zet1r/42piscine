// #include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	saver;

	if (*b != 0)
	{
		saver = *a / *b;
		*b = *a % *b;
		*a = saver;
	}
}
// int	main()
// {
// 	int valor1 = 47; // Guarda o resultado da divisao
// 	int valor2 = 0; // Guarda o resto da divisao
// 	int *a = &valor1; // Ponteiro Valor1
// 	int *b = &valor2; // Ponteiro Valor2
// 	printf("%d \n", valor1);
// 	printf("%d \n", valor2);
// 	ft_ultimate_div_mod(a, b);
// 	printf("--------------- \n");
// 	printf("%d \n", valor1);
// 	printf("%d \n", valor2);
// }
