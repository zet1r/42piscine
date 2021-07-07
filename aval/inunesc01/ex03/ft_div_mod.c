// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// int	main()
// {
// 	int a = 0; // Numeros que serao divididos
// 	int b = 0; // Numeros que serao divididos
// 	int divisao = 0; // Resultado da divisao
// 	int resto = 0; // Resto da divisao

// 	int *div = &divisao;
// 	int *mod = &resto; // Resto da divisão

// 	ft_div_mod(a, b, div, mod);

// 	printf("%d \n", divisao);
// 	printf("%d \n", resto);

// 	// printf("divisao de a e b é: %d \n", div);
// 	// printf("O resto da divisao de a e b é: %d \n", mod);
// }
