#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}
/*
int	main(void)
{
	char	a[] = "asdasdassda";

	ft_putstr(a);
	return (0);
}
*/
