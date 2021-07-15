char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}	
	dest[i] = '\0';
	return (dest);
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
	char	a[] = "Hello World";
	char	b[] = "Goodbye World";

	ft_putstr(a);
	ft_putchar('\n');
	ft_putstr(b);
	ft_putchar('\n');
	ft_strcpy(b, a);
	ft_putstr(a);
	ft_putchar('\n');
	ft_putstr(b);
	ft_putchar('\n');
	return (0);
}*/
