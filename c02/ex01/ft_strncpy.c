char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
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
	char	b[] = "1111";
	unsigned int	n = 3;

	ft_putstr(a);
	ft_putchar('\n');
	ft_putstr(b);
	ft_putchar('\n');
	ft_strncpy(b, a, n);
	ft_putchar('\n');
	ft_putstr(b);
	ft_putchar('\n');
	return (0);
}
