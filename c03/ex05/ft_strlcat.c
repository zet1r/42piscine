unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	sizef;

	i = 0;
	while (dest[i] != '\0')
		i++;
	sizef = 0;
	while (src[sizef] != '\0')
		++sizef;
	if (size <= i)
		sizef += size;
	else
		sizef += i;
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (sizef);
}
/*
#include <string.h>
#include <unistd.h>
#include <stdio.h>

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
	char	str1[] = "1234";
	char	str2[] = "56789";
	int	n = 3;

	ft_putstr(str1);
	ft_putchar('\n');
	ft_putstr(str2);
	ft_putchar('\n');
	printf("%d\n",ft_strlcat(str1, str2, n));
	printf("%lu\n", strlcat(str1, str2, n));
	return (0);
}*/
