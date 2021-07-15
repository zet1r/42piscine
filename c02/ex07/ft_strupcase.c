char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
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
	char	a[] = "345.]}345asdsadASDASD00011Chupa69";

	ft_putstr(a);
	ft_putchar('\n');
	ft_putstr(ft_strupcase(a));
	return (0);
}*/
