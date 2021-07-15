int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		nb = nb * ft_recursive_power(nb, power - 1);
		return (nb);
	}
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_recursive_power(0, 5));
	return (0);
}*/
