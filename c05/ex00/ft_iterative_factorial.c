int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		a = a * nb;
		nb--;
	}
	return (a);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(6));
}*/
