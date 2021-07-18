#include "rush02.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	unsigned char	*x;
	unsigned char	*y;

	x = (unsigned char *)s1;
	y = (unsigned char *)s2;
	i = 0;
	while (1)
	{
		if (x[i] == '\0' && y[i] == '\0')
			break ;
		if (x[i] > y[i])
			return (1);
		if (x[i] < y[i])
			return (-1);
		i++;
	}
	return (0);
}
