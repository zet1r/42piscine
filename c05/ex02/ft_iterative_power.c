int	ft_iterative_power(int	nb, int power)
{
	int	i;
	int	res;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		i = power + 1;
		res = nb;
		while (--i > 1)
			res *= nb;
		return (res);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(5, 5));
	return (0);
}*/
