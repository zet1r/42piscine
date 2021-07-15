int	ft_atoi(char *str)
{
	int	i;
	int	sig;
	int	n;

	i = 0;
	n = 0;
	sig = 0;
	while ((str[i] == '\v') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sig++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	if (sig % 2 == 1)
		n = -n;
	return (n);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "    +-+--001230a0";

	printf("%d\n", ft_atoi(a));	
	return (0);
}*/
