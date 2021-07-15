int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 31 && str[i] < 127))
			return (0);
		i++;
	}
	return (1);
}
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
int	main(void)
{
	char	a[] = "Chup  a69";

	ft_putstr(a);
	ft_putchar('\n');
	ft_putchar(ft_str_is_printable(a) + '0');
	return (0);
}*/
